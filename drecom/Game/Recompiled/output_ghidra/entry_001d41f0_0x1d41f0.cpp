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

// Function: entry_001d41f0
// Address: 0x1d41f0 - 0x1d4260
void entry_001d41f0_0x1d41f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d41f0_0x1d41f0");
#endif

    switch (ctx->pc) {
        case 0x1d4230u: goto label_1d4230;
        case 0x1d424cu: goto label_1d424c;
        default: break;
    }

    ctx->pc = 0x1d41f0u;

    // 0x1d41f0: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x1d41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d41f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d41f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d41f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d41fc: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1d41fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4200: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d4200u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4204: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1d4204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1d4208: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1d4208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1d420c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1d420cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1d4210: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d4210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d4214: 0x1620ff2b  bnez        $s1, . + 4 + (-0xD5 << 2)
    ctx->pc = 0x1D4214u;
    {
        const bool branch_taken_0x1d4214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4214) {
            ctx->pc = 0x1D3EC4u;
            return;
        }
    }
    ctx->pc = 0x1D421Cu;
    // 0x1d421c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d421cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4220: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4224: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1d4224u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1d4228: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4228u;
    SET_GPR_U32(ctx, 31, 0x1D4230u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4228u, 0x1D4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4230u;
label_1d4230:
    // 0x1d4230: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d4230u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4234: 0x16b180  sll         $s6, $s6, 6
    ctx->pc = 0x1d4234u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1d4238: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d4238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d423c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4240: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1d4240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d4244: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4244u;
    SET_GPR_U32(ctx, 31, 0x1D424Cu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4244u, 0x1D424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D424Cu;
label_1d424c:
    // 0x1d424c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d424cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4250: 0x16b180  sll         $s6, $s6, 6
    ctx->pc = 0x1d4250u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1d4254: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4258: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1d4258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d425c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1d425cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1d4260u;
}
