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

// Function: entry_00282a9c
// Address: 0x282a9c - 0x282afc
void entry_00282a9c_0x282a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282a9c_0x282a9c");
#endif

    ctx->pc = 0x282a9cu;

    // 0x282a9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282aa0: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x282aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x282aa4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x282aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x282aa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x282aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282aac: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x282AACu;
    {
        const bool branch_taken_0x282aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282aac) {
            ctx->pc = 0x282AFCu;
            return;
        }
    }
    ctx->pc = 0x282AB4u;
    // 0x282ab4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x282ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x282ab8: 0x24423340  addiu       $v0, $v0, 0x3340
    ctx->pc = 0x282ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13120));
    // 0x282abc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282ac0: 0xac22dafc  sw          $v0, -0x2504($at)
    ctx->pc = 0x282ac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDAFCu, _value); } while (0);
    // 0x282ac4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x282ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x282ac8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282acc: 0xac22daf8  sw          $v0, -0x2508($at)
    ctx->pc = 0x282accu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDAF8u, _value); } while (0);
    // 0x282ad0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x282ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282ad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282ad8: 0xa022daf1  sb          $v0, -0x250F($at)
    ctx->pc = 0x282ad8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAF1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF1u, _value); } while (0);
    // 0x282adc: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x282adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x282ae0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282ae4: 0xa022daf3  sb          $v0, -0x250D($at)
    ctx->pc = 0x282ae4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAF3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF3u, _value); } while (0);
    // 0x282ae8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282aec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282af0: 0xa022d411  sb          $v0, -0x2BEF($at)
    ctx->pc = 0x282af0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD411u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD411u, _value); } while (0);
    // 0x282af4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282AF4u;
    {
        const bool branch_taken_0x282af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282af4) {
            ctx->pc = 0x282B08u;
            return;
        }
    }
    ctx->pc = 0x282AFCu;
}
