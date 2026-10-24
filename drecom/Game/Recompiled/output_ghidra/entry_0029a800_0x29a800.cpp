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

// Function: entry_0029a800
// Address: 0x29a800 - 0x29a844
void entry_0029a800_0x29a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a800_0x29a800");
#endif

    switch (ctx->pc) {
        case 0x29a818u: goto label_29a818;
        case 0x29a82cu: goto label_29a82c;
        default: break;
    }

    ctx->pc = 0x29a800u;

    // 0x29a800: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x29a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29a804: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a808: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x29a808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29a80c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x29a80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29a810: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29A810u;
    SET_GPR_U32(ctx, 31, 0x29A818u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x29A818u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A818u) { return; }
    ctx->pc = 0x29A818u;
label_29a818:
    // 0x29a818: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x29a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a81c: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x29a81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x29a820: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x29a820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29a824: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29A824u;
    SET_GPR_U32(ctx, 31, 0x29A82Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29A824u, 0x29A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A82Cu;
label_29a82c:
    // 0x29a82c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x29a82cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a830: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x29a830u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29a834: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x29a834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x29a838: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A838u;
    {
        const bool branch_taken_0x29a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a838) {
            ctx->pc = 0x29A844u;
            return;
        }
    }
    ctx->pc = 0x29A840u;
    // 0x29a840: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x29a840u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x29a844u;
}
