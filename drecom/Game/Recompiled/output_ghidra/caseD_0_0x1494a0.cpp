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

// Function: caseD_0
// Address: 0x1494a0 - 0x149578
void caseD_0_0x1494a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1494a0");
#endif

    switch (ctx->pc) {
        case 0x149524u: goto label_149524;
        case 0x149548u: goto label_149548;
        default: break;
    }

    ctx->pc = 0x1494a0u;

    // 0x1494a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1494a4: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x1494a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1494a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1494ac: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x1494acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1494b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1494b4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1494b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1494b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1494b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1494bc: 0x3c02447c  lui         $v0, 0x447C
    ctx->pc = 0x1494bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17532 << 16));
    // 0x1494c0: 0x3442208b  ori         $v0, $v0, 0x208B
    ctx->pc = 0x1494c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8331);
    // 0x1494c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1494c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1494c8: 0x0  nop
    ctx->pc = 0x1494c8u;
    // NOP
    // 0x1494cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1494ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1494d0: 0x3c02433e  lui         $v0, 0x433E
    ctx->pc = 0x1494d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17214 << 16));
    // 0x1494d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1494d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1494d8: 0x0  nop
    ctx->pc = 0x1494d8u;
    // NOP
    // 0x1494dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1494dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1494e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1494e4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1494e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1494e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1494e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1494ec: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x1494f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1494f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1494f4: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x1494f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1494f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1494f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1494fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1494fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149500: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x149500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x149504: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14950c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14950cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x149510: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x149510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
    // 0x149514: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x149514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x149518: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14951c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14951Cu;
    SET_GPR_U32(ctx, 31, 0x149524u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14951Cu, 0x149524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149524u;
label_149524:
    // 0x149524: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x149524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x149528: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14952c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14952cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x149530: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149534: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149538: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x149538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14953c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x149540: 0xc058f20  jal         func_163C80
    ctx->pc = 0x149540u;
    SET_GPR_U32(ctx, 31, 0x149548u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x149540u, 0x149548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149548u;
label_149548:
    // 0x149548: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14954c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x14954cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x149550: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x149550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149554: 0x0  nop
    ctx->pc = 0x149554u;
    // NOP
    // 0x149558: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x149558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14955c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14955cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x149560: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x149560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149564: 0xe4401578  swc1        $f0, 0x1578($v0)
    ctx->pc = 0x149564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5496), bits); }
    // 0x149568: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14956c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14956cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x149570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149574: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x149578u;
}
