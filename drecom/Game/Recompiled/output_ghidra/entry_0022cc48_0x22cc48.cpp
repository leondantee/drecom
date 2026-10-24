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

// Function: entry_0022cc48
// Address: 0x22cc48 - 0x22cd0c
void entry_0022cc48_0x22cc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cc48_0x22cc48");
#endif

    ctx->pc = 0x22cc48u;

    // 0x22cc48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc4c: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x22cc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x22cc50: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x22cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x22cc54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cc54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cc58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cc60: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22cc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x22cc64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22cc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22cc68: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22cc68u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cc6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc70: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cc74: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x22cc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x22cc78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22cc7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cc80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cc84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cc88: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22cc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x22cc8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22cc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22cc90: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22cc94: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x22cc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x22cc98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22cc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22cc9c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22cc9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22cca0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cca4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cca8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22ccac: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x22ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x22ccb0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22ccb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22ccb4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22ccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x22ccb8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ccbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ccc0: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x22ccc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x22ccc4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22ccc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22ccc8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x22ccc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x22cccc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22CCCCu;
    {
        const bool branch_taken_0x22cccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cccc) {
            ctx->pc = 0x22CD0Cu;
            return;
        }
    }
    ctx->pc = 0x22CCD4u;
    // 0x22ccd4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ccd8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ccdc: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x22ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x22cce0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22cce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cce4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x22cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cce8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ccec: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x22ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x22ccf0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ccf4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ccf8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x22ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x22ccfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ccfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cd00: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x22cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cd04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cd04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22cd08: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x22cd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    ctx->pc = 0x22cd0cu;
}
