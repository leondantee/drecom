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

// Function: entry_00303700
// Address: 0x303700 - 0x3037d4
void entry_00303700_0x303700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303700_0x303700");
#endif

    switch (ctx->pc) {
        case 0x30372cu: goto label_30372c;
        case 0x303740u: goto label_303740;
        case 0x303758u: goto label_303758;
        case 0x303764u: goto label_303764;
        case 0x303774u: goto label_303774;
        case 0x303780u: goto label_303780;
        default: break;
    }

    ctx->pc = 0x303700u;

    // 0x303700: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303704: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x303704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303708: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30370c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x30370cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x303710: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x303710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x303714: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x303714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x303718: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x303718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30371c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303720: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x303720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x303724: 0xc05c848  jal         func_172120
    ctx->pc = 0x303724u;
    SET_GPR_U32(ctx, 31, 0x30372Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x303724u, 0x30372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30372Cu;
label_30372c:
    // 0x30372c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303730: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x303730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303734: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x303734u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303738: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x303738u;
    SET_GPR_U32(ctx, 31, 0x303740u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x303738u, 0x303740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303740u;
label_303740:
    // 0x303740: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303744: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x303744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x303748: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30374c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30374cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303750: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x303750u;
    SET_GPR_U32(ctx, 31, 0x303758u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x303750u, 0x303758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303758u;
label_303758:
    // 0x303758: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30375c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30375Cu;
    SET_GPR_U32(ctx, 31, 0x303764u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30375Cu, 0x303764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303764u;
label_303764:
    // 0x303764: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303768: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303768u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30376c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30376Cu;
    SET_GPR_U32(ctx, 31, 0x303774u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30376Cu, 0x303774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303774u;
label_303774:
    // 0x303774: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303778: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x303778u;
    SET_GPR_U32(ctx, 31, 0x303780u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x303778u, 0x303780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303780u;
label_303780:
    // 0x303780: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303784: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x303784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x303788: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x303788u;
    {
        const bool branch_taken_0x303788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303788) {
            ctx->pc = 0x3037D4u;
            return;
        }
    }
    ctx->pc = 0x303790u;
    // 0x303790: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x303790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x303794: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303798: 0xac64136c  sw          $a0, 0x136C($v1)
    ctx->pc = 0x303798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4972), GPR_U32(ctx, 4));
    // 0x30379c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3037a0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x3037a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x3037a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3037a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3037a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3037a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3037ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3037acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3037b0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x3037b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3037b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3037b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3037b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3037b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3037bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3037bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3037c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3037c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3037c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3037c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3037c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3037c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3037cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3037ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3037d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3037d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3037d4u;
}
