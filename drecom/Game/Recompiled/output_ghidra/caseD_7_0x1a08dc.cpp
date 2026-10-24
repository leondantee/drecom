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

// Function: caseD_7
// Address: 0x1a08dc - 0x1a0934
void caseD_7_0x1a08dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1a08dc");
#endif

    switch (ctx->pc) {
        case 0x1a08ecu: goto label_1a08ec;
        case 0x1a0904u: goto label_1a0904;
        default: break;
    }

    ctx->pc = 0x1a08dcu;

    // 0x1a08dc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a08dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a08e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a08e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a08e4: 0xc04333e  jal         func_10CCF8
    ctx->pc = 0x1A08E4u;
    SET_GPR_U32(ctx, 31, 0x1A08ECu);
    ctx->pc = 0x10CCF8u;
    {
        ctx->pc = 0x1A08ECu;
        ps2_stubs::scePadInfoPressMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A08ECu) { return; }
    ctx->pc = 0x1A08ECu;
label_1a08ec:
    // 0x1a08ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A08ECu;
    {
        const bool branch_taken_0x1a08ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a08ec) {
            ctx->pc = 0x1A0934u;
            return;
        }
    }
    ctx->pc = 0x1A08F4u;
    // 0x1a08f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a08f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a08f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a08f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a08fc: 0xc043356  jal         func_10CD58
    ctx->pc = 0x1A08FCu;
    SET_GPR_U32(ctx, 31, 0x1A0904u);
    ctx->pc = 0x10CD58u;
    {
        ctx->pc = 0x1A0904u;
        ps2_stubs::scePadEnterPressMode(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A0904u) { return; }
    ctx->pc = 0x1A0904u;
label_1a0904:
    // 0x1a0904: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A0904u;
    {
        const bool branch_taken_0x1a0904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0904) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A090Cu;
    // 0x1a090c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a090cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0910: 0x8c222748  lw          $v0, 0x2748($at)
    ctx->pc = 0x1a0910u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D2748u));
    // 0x1a0914: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1a0914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a0918: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a091c: 0xac222748  sw          $v0, 0x2748($at)
    ctx->pc = 0x1a091cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D2748u, _value); } while (0);
    // 0x1a0920: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a0924: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a0924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a0928: 0xa4222740  sh          $v0, 0x2740($at)
    ctx->pc = 0x1a0928u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2740u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D2740u, _value); } while (0);
    // 0x1a092c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1A092Cu;
    {
        const bool branch_taken_0x1a092c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a092c) {
            ctx->pc = 0x1A09DCu;
            return;
        }
    }
    ctx->pc = 0x1A0934u;
}
