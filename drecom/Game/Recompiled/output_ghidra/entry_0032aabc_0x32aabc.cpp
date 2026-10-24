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

// Function: entry_0032aabc
// Address: 0x32aabc - 0x32ab20
void entry_0032aabc_0x32aabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032aabc_0x32aabc");
#endif

    ctx->pc = 0x32aabcu;

    // 0x32aabc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aac0: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32aac0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32aac4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aac8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x32aac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x32aacc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32AACCu;
    {
        const bool branch_taken_0x32aacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aacc) {
            ctx->pc = 0x32AB20u;
            return;
        }
    }
    ctx->pc = 0x32AAD4u;
    // 0x32aad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aad8: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32aad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32aadc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aae0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x32aae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x32aae4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32AAE4u;
    {
        const bool branch_taken_0x32aae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aae4) {
            ctx->pc = 0x32AB20u;
            return;
        }
    }
    ctx->pc = 0x32AAECu;
    // 0x32aaec: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aaf0: 0x8c23a228  lw          $v1, -0x5DD8($at)
    ctx->pc = 0x32aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A228u));
    // 0x32aaf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32aaf8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aafc: 0xac23a228  sw          $v1, -0x5DD8($at)
    ctx->pc = 0x32aafcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A228u, _value); } while (0);
    // 0x32ab00: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab04: 0x8c23a228  lw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A228u));
    // 0x32ab08: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x32ab08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32ab0c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AB0Cu;
    {
        const bool branch_taken_0x32ab0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ab0c) {
            ctx->pc = 0x32AB20u;
            return;
        }
    }
    ctx->pc = 0x32AB14u;
    // 0x32ab14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ab18: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab1c: 0xac23a228  sw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A228u, _value); } while (0);
    ctx->pc = 0x32ab20u;
}
