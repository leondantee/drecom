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

// Function: entry_00248fa4
// Address: 0x248fa4 - 0x249038
void entry_00248fa4_0x248fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248fa4_0x248fa4");
#endif

    ctx->pc = 0x248fa4u;

    // 0x248fa4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248fa8: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x248fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248fac: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x248facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x248fb0: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x248fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x248fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248fb8: 0x0  nop
    ctx->pc = 0x248fb8u;
    // NOP
    // 0x248fbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248fc0: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x248fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x248fc4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248fc8: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x248fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248fcc: 0x3c123c0e  lui         $s2, 0x3C0E
    ctx->pc = 0x248fccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)15374 << 16));
    // 0x248fd0: 0x3643fa35  ori         $v1, $s2, 0xFA35
    ctx->pc = 0x248fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64053);
    // 0x248fd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248fd8: 0x0  nop
    ctx->pc = 0x248fd8u;
    // NOP
    // 0x248fdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248fe0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x248fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x248fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248fe8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248fec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248ff0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x248ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x248ff4: 0x3c1341a0  lui         $s3, 0x41A0
    ctx->pc = 0x248ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16800 << 16));
    // 0x248ff8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x248ff8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248ffc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x249000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x249004: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x249004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x249008: 0x3c144020  lui         $s4, 0x4020
    ctx->pc = 0x249008u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16416 << 16));
    // 0x24900c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x24900cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249010: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249014: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x249014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x249018: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x249018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x24901c: 0x3c154020  lui         $s5, 0x4020
    ctx->pc = 0x24901cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16416 << 16));
    // 0x249020: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x249020u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249024: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249028: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x249028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24902c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x24902cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x249030: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x249030u;
    {
        const bool branch_taken_0x249030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249030) {
            ctx->pc = 0x249124u;
            return;
        }
    }
    ctx->pc = 0x249038u;
}
