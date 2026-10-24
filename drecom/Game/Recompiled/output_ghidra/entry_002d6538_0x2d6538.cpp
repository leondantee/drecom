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

// Function: entry_002d6538
// Address: 0x2d6538 - 0x2d65d0
void entry_002d6538_0x2d6538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6538_0x2d6538");
#endif

    switch (ctx->pc) {
        case 0x2d6558u: goto label_2d6558;
        case 0x2d6588u: goto label_2d6588;
        default: break;
    }

    ctx->pc = 0x2d6538u;

    // 0x2d6538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d653c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d653cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6540: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d6540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d6544: 0x24063c04  addiu       $a2, $zero, 0x3C04
    ctx->pc = 0x2d6544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15364));
    // 0x2d6548: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d654c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d654cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d6550: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D6550u;
    SET_GPR_U32(ctx, 31, 0x2D6558u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D6550u, 0x2D6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6558u;
label_2d6558:
    // 0x2d6558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d655c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6560: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6564: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6568: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d656c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6570: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d6570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d6574: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d6574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6578: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d6578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d657c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d657cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d6580: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D6580u;
    SET_GPR_U32(ctx, 31, 0x2D6588u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D6580u, 0x2D6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6588u;
label_2d6588:
    // 0x2d6588: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d658c: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d658cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6590: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6598: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d6598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d659c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d65a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d65a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d65a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d65a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d65a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d65a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d65ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d65acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d65b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65b4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2d65b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d65b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65bc: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2d65bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d65c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d65c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d65c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d65cc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d65ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d65d0u;
}
