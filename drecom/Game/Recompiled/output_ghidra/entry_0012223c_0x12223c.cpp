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

// Function: entry_0012223c
// Address: 0x12223c - 0x122314
void entry_0012223c_0x12223c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012223c_0x12223c");
#endif

    switch (ctx->pc) {
        case 0x1222c4u: goto label_1222c4;
        default: break;
    }

    ctx->pc = 0x12223cu;

    // 0x12223c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x12223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122240: 0x3c113fc9  lui         $s1, 0x3FC9
    ctx->pc = 0x122240u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16329 << 16));
    // 0x122244: 0x36240fdb  ori         $a0, $s1, 0xFDB
    ctx->pc = 0x122244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4059);
    // 0x122248: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122248u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12224c: 0x0  nop
    ctx->pc = 0x12224cu;
    // NOP
    // 0x122250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x122250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122254: 0x0  nop
    ctx->pc = 0x122254u;
    // NOP
    // 0x122258: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x122258u;
    {
        const bool branch_taken_0x122258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122258) {
            ctx->pc = 0x12234Cu;
            return;
        }
    }
    ctx->pc = 0x122260u;
    // 0x122260: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122264: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x122264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x122268: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x122268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12226c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12226cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x122270: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x122270u;
    {
        const bool branch_taken_0x122270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122270) {
            ctx->pc = 0x122314u;
            return;
        }
    }
    ctx->pc = 0x122278u;
    // 0x122278: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12227c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x122280: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x122280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x122284: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x122284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x122288: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x122288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x12228c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12228cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122290: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x122290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x122294: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x122294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x122298: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x122298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x12229c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x12229cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1222a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1222a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1222a4: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x1222a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1222a8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1222a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1222ac: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1222acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1222b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1222b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1222b4: 0x0  nop
    ctx->pc = 0x1222b4u;
    // NOP
    // 0x1222b8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1222b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1222bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1222BCu;
    SET_GPR_U32(ctx, 31, 0x1222C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1222BCu, 0x1222C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222C4u;
label_1222c4:
    // 0x1222c4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1222c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1222c8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1222c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1222cc: 0x90a409df  lbu         $a0, 0x9DF($a1)
    ctx->pc = 0x1222ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2527)));
    // 0x1222d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1222d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1222d4: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1222d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1222d8: 0x14800295  bnez        $a0, . + 4 + (0x295 << 2)
    ctx->pc = 0x1222D8u;
    {
        const bool branch_taken_0x1222d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1222d8) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x1222E0u;
    // 0x1222e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1222e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1222e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1222e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1222e8: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1222e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1222ec: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1222ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1222f0: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x1222f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1222f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1222f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1222f8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1222f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1222fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1222fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122300: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122304: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122308: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12230c: 0x10000288  b           . + 4 + (0x288 << 2)
    ctx->pc = 0x12230Cu;
    {
        const bool branch_taken_0x12230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12230c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122314u;
}
