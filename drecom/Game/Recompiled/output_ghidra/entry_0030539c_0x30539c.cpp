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

// Function: entry_0030539c
// Address: 0x30539c - 0x305484
void entry_0030539c_0x30539c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030539c_0x30539c");
#endif

    switch (ctx->pc) {
        case 0x3053fcu: goto label_3053fc;
        case 0x305464u: goto label_305464;
        default: break;
    }

    ctx->pc = 0x30539cu;

    // 0x30539c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3053a0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3053a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3053a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3053a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3053a8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3053a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3053ac: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3053ACu;
    {
        const bool branch_taken_0x3053ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3053ac) {
            ctx->pc = 0x305484u;
            return;
        }
    }
    ctx->pc = 0x3053B4u;
    // 0x3053b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3053b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3053b8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x3053b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x3053bc: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3053BCu;
    {
        const bool branch_taken_0x3053bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3053bc) {
            ctx->pc = 0x305484u;
            return;
        }
    }
    ctx->pc = 0x3053C4u;
    // 0x3053c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3053c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3053c8: 0x244295f0  addiu       $v0, $v0, -0x6A10
    ctx->pc = 0x3053c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940144));
    // 0x3053cc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3053ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3053d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3053d0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3995F0u));
    // 0x3053d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3053d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3053d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3053d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3053dc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3053dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3053e0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x3053e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3053e4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x3053e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x3053e8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3053e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3053ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3053ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3053f0: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x3053f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x3053f4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3053F4u;
    SET_GPR_U32(ctx, 31, 0x3053FCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3053F4u, 0x3053FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053FCu;
label_3053fc:
    // 0x3053fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3053fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305400: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305400u;
    {
        const bool branch_taken_0x305400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305400) {
            ctx->pc = 0x305484u;
            return;
        }
    }
    ctx->pc = 0x305408u;
    // 0x305408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30540c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305410: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x305410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x305414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305418: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30541c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30541cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x305420: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x305420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x305424: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x305424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x305428: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30542c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305430: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x305430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305434: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x305434u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305438: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x305438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30543c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x30543cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x305440: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x305440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x305444: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x305444u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x305448: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x305448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x30544c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30544cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305450: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x305450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305454: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305458: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x305458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30545c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x30545Cu;
    SET_GPR_U32(ctx, 31, 0x305464u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x305464u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x305464u) { return; }
    ctx->pc = 0x305464u;
label_305464:
    // 0x305464: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x305464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x305468: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x305468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30546c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30546cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305470: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x305470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x305474: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305478: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x305478u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30547c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x30547Cu;
    SET_GPR_U32(ctx, 31, 0x305484u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x30547Cu, 0x305484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305484u;
}
