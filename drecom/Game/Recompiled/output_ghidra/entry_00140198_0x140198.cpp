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

// Function: entry_00140198
// Address: 0x140198 - 0x140250
void entry_00140198_0x140198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140198_0x140198");
#endif

    ctx->pc = 0x140198u;

    // 0x140198: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14019c: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x14019cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1401a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1401a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1401a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1401a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1401a8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1401A8u;
    {
        const bool branch_taken_0x1401a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1401a8) {
            ctx->pc = 0x140250u;
            return;
        }
    }
    ctx->pc = 0x1401B0u;
    // 0x1401b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1401b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1401b4: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1401b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1401b8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1401b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1401bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1401bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1401c0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1401C0u;
    {
        const bool branch_taken_0x1401c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1401c0) {
            ctx->pc = 0x140250u;
            return;
        }
    }
    ctx->pc = 0x1401C8u;
    // 0x1401c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1401c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1401cc: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1401ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1401d0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1401d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1401d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1401d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1401d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1401D8u;
    {
        const bool branch_taken_0x1401d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1401d8) {
            ctx->pc = 0x140250u;
            return;
        }
    }
    ctx->pc = 0x1401E0u;
    // 0x1401e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1401e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1401e4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1401e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1401e8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1401e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1401ec: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1401ECu;
    {
        const bool branch_taken_0x1401ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1401ec) {
            ctx->pc = 0x140250u;
            return;
        }
    }
    ctx->pc = 0x1401F4u;
    // 0x1401f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1401f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1401f8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1401f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1401fc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1401fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x140200: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x140200u;
    {
        const bool branch_taken_0x140200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140200) {
            ctx->pc = 0x140250u;
            return;
        }
    }
    ctx->pc = 0x140208u;
    // 0x140208: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14020c: 0x9022fe14  lbu         $v0, -0x1EC($at)
    ctx->pc = 0x14020cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5CFE14u));
    // 0x140210: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x140214: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x140214u;
    {
        const bool branch_taken_0x140214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140214) {
            ctx->pc = 0x140250u;
            return;
        }
    }
    ctx->pc = 0x14021Cu;
    // 0x14021c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14021cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140220: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x140220u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x140224: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x140224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x140228: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x140228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x14022c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x140230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140234: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x140234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x140238: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x140238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x14023c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140240: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x140240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x140244: 0x24450ea0  addiu       $a1, $v0, 0xEA0
    ctx->pc = 0x140244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
    // 0x140248: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x140248u;
    SET_GPR_U32(ctx, 31, 0x140250u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x140248u, 0x140250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140250u;
}
