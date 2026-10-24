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

// Function: entry_0027e624
// Address: 0x27e624 - 0x27e684
void entry_0027e624_0x27e624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e624_0x27e624");
#endif

    ctx->pc = 0x27e624u;

    // 0x27e624: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e628: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x27e628u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e62c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x27e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x27e630: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27e630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27e634: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E634u;
    {
        const bool branch_taken_0x27e634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e634) {
            ctx->pc = 0x27E684u;
            return;
        }
    }
    ctx->pc = 0x27E63Cu;
    // 0x27e63c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27e640: 0x2463eda0  addiu       $v1, $v1, -0x1260
    ctx->pc = 0x27e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962592));
    // 0x27e644: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e648: 0xac23d91c  sw          $v1, -0x26E4($at)
    ctx->pc = 0x27e648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD91Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD91Cu, _value); } while (0);
    // 0x27e64c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e650: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e654: 0xac23d918  sw          $v1, -0x26E8($at)
    ctx->pc = 0x27e654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD918u, _value); } while (0);
    // 0x27e658: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27e658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27e65c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e660: 0xa023d911  sb          $v1, -0x26EF($at)
    ctx->pc = 0x27e660u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x27e664: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x27e664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x27e668: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e66c: 0xa023d913  sb          $v1, -0x26ED($at)
    ctx->pc = 0x27e66cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD913u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD913u, _value); } while (0);
    // 0x27e670: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e678: 0xa023d691  sb          $v1, -0x296F($at)
    ctx->pc = 0x27e678u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD691u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD691u, _value); } while (0);
    // 0x27e67c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E67Cu;
    {
        const bool branch_taken_0x27e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e67c) {
            ctx->pc = 0x27E690u;
            return;
        }
    }
    ctx->pc = 0x27E684u;
}
