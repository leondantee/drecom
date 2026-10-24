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

// Function: entry_0032ab20
// Address: 0x32ab20 - 0x32ab7c
void entry_0032ab20_0x32ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ab20_0x32ab20");
#endif

    ctx->pc = 0x32ab20u;

    // 0x32ab20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ab24: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32ab24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32ab28: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ab28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32ab2c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x32ab2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x32ab30: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32AB30u;
    {
        const bool branch_taken_0x32ab30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab30) {
            ctx->pc = 0x32AB7Cu;
            return;
        }
    }
    ctx->pc = 0x32AB38u;
    // 0x32ab38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ab38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ab3c: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32ab3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32ab40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ab40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32ab44: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32ab44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32ab48: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32AB48u;
    {
        const bool branch_taken_0x32ab48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab48) {
            ctx->pc = 0x32AB7Cu;
            return;
        }
    }
    ctx->pc = 0x32AB50u;
    // 0x32ab50: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab54: 0x8c23a228  lw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A228u));
    // 0x32ab58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32ab58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32ab5c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab60: 0xac23a228  sw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A228u, _value); } while (0);
    // 0x32ab64: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab68: 0x8c23a228  lw          $v1, -0x5DD8($at)
    ctx->pc = 0x32ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A228u));
    // 0x32ab6c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AB6Cu;
    {
        const bool branch_taken_0x32ab6c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32ab6c) {
            ctx->pc = 0x32AB7Cu;
            return;
        }
    }
    ctx->pc = 0x32AB74u;
    // 0x32ab74: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ab78: 0xac20a228  sw          $zero, -0x5DD8($at)
    ctx->pc = 0x32ab78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x39A228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A228u, _value); } while (0);
    ctx->pc = 0x32ab7cu;
}
