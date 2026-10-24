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

// Function: caseD_9
// Address: 0x2078e0 - 0x2079e0
void caseD_9_0x2078e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x2078e0");
#endif

    switch (ctx->pc) {
        case 0x2078f0u: goto label_2078f0;
        case 0x2078fcu: goto label_2078fc;
        case 0x207924u: goto label_207924;
        case 0x207958u: goto label_207958;
        case 0x207988u: goto label_207988;
        default: break;
    }

    ctx->pc = 0x2078e0u;

    // 0x2078e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2078e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2078e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2078e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2078e8: 0xc080f60  jal         func_203D80
    ctx->pc = 0x2078E8u;
    SET_GPR_U32(ctx, 31, 0x2078F0u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x2078E8u, 0x2078F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078F0u;
label_2078f0:
    // 0x2078f0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2078f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2078f4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2078F4u;
    SET_GPR_U32(ctx, 31, 0x2078FCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2078F4u, 0x2078FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078FCu;
label_2078fc:
    // 0x2078fc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2078fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207900: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x207900u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x207904: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x207904u;
    {
        const bool branch_taken_0x207904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x207904) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x20790Cu;
    // 0x20790c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207910: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207914: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x207914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x207918: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x207918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x20791c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x20791Cu;
    SET_GPR_U32(ctx, 31, 0x207924u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20791Cu, 0x207924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207924u;
label_207924:
    // 0x207924: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x207924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x207928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x207928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20792c: 0x0  nop
    ctx->pc = 0x20792cu;
    // NOP
    // 0x207930: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207934: 0x0  nop
    ctx->pc = 0x207934u;
    // NOP
    // 0x207938: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x207938u;
    {
        const bool branch_taken_0x207938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207938) {
            ctx->pc = 0x2079E0u;
            return;
        }
    }
    ctx->pc = 0x207940u;
    // 0x207940: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207944: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207948: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x207948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x20794c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x20794cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x207950: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x207950u;
    SET_GPR_U32(ctx, 31, 0x207958u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x207950u, 0x207958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207958u;
label_207958:
    // 0x207958: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x207958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
    // 0x20795c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20795cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207960: 0x0  nop
    ctx->pc = 0x207960u;
    // NOP
    // 0x207964: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207968: 0x0  nop
    ctx->pc = 0x207968u;
    // NOP
    // 0x20796c: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x20796Cu;
    {
        const bool branch_taken_0x20796c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20796c) {
            ctx->pc = 0x2079E0u;
            return;
        }
    }
    ctx->pc = 0x207974u;
    // 0x207974: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207978: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x207978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x20797c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20797cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x207980: 0xc067588  jal         func_19D620
    ctx->pc = 0x207980u;
    SET_GPR_U32(ctx, 31, 0x207988u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x207980u, 0x207988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207988u;
label_207988:
    // 0x207988: 0x3c054662  lui         $a1, 0x4662
    ctx->pc = 0x207988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18018 << 16));
    // 0x20798c: 0x34a49000  ori         $a0, $a1, 0x9000
    ctx->pc = 0x20798cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
    // 0x207990: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x207990u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207994: 0x0  nop
    ctx->pc = 0x207994u;
    // NOP
    // 0x207998: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20799c: 0x0  nop
    ctx->pc = 0x20799cu;
    // NOP
    // 0x2079a0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2079A0u;
    {
        const bool branch_taken_0x2079a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2079a0) {
            ctx->pc = 0x2079E0u;
            return;
        }
    }
    ctx->pc = 0x2079A8u;
    // 0x2079a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2079a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2079ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2079acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2079b0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2079b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2079b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2079b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2079b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2079b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2079bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2079bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2079c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2079c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2079c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2079c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2079c8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2079c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2079cc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2079ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2079d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2079d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2079d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2079d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2079d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2079D8u;
    {
        const bool branch_taken_0x2079d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2079d8) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x2079E0u;
}
