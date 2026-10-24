#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0032ab7c
// Address: 0x32ab7c - 0x32abe0
void entry_0032ab7c_0x32ab7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ab7c_0x32ab7c");
#endif

    ctx->pc = 0x32ab7cu;

    // 0x32ab7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ab7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ab80: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32ab80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32ab84: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32ab88: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x32ab88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x32ab8c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32AB8Cu;
    {
        const bool branch_taken_0x32ab8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab8c) {
            ctx->pc = 0x32ABE0u;
            return;
        }
    }
    ctx->pc = 0x32AB94u;
    // 0x32ab94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ab98: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32ab98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32ab9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aba0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x32aba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x32aba4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32ABA4u;
    {
        const bool branch_taken_0x32aba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aba4) {
            ctx->pc = 0x32ABE0u;
            return;
        }
    }
    ctx->pc = 0x32ABACu;
    // 0x32abac: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32abacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32abb0: 0x8c23a22c  lw          $v1, -0x5DD4($at)
    ctx->pc = 0x32abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A22Cu));
    // 0x32abb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32abb8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32abb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32abbc: 0xac23a22c  sw          $v1, -0x5DD4($at)
    ctx->pc = 0x32abbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
    // 0x32abc0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32abc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32abc4: 0x8c23a22c  lw          $v1, -0x5DD4($at)
    ctx->pc = 0x32abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A22Cu));
    // 0x32abc8: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x32abc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32abcc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32ABCCu;
    {
        const bool branch_taken_0x32abcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32abcc) {
            ctx->pc = 0x32ABE0u;
            return;
        }
    }
    ctx->pc = 0x32ABD4u;
    // 0x32abd4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32abd8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32abd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32abdc: 0xac23a22c  sw          $v1, -0x5DD4($at)
    ctx->pc = 0x32abdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
    ctx->pc = 0x32abe0u;
}
