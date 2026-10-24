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

// Function: entry_001e3ca4
// Address: 0x1e3ca4 - 0x1e3d40
void entry_001e3ca4_0x1e3ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3ca4_0x1e3ca4");
#endif

    switch (ctx->pc) {
        case 0x1e3cfcu: goto label_1e3cfc;
        case 0x1e3d10u: goto label_1e3d10;
        default: break;
    }

    ctx->pc = 0x1e3ca4u;

    // 0x1e3ca4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3ca8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e3ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e3cac: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E3CACu;
    {
        const bool branch_taken_0x1e3cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3cac) {
            ctx->pc = 0x1E3D40u;
            return;
        }
    }
    ctx->pc = 0x1E3CB4u;
    // 0x1e3cb4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e3cb8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e3cbc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e3cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e3cc0: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e3cc0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e3cc4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3cc8: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e3ccc: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e3cd0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3cd4: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e3cd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3cd8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e3cdc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e3ce0: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e3ce4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e3ce8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e3cec: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1e3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1e3cf0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e3cf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3cf4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E3CF4u;
    SET_GPR_U32(ctx, 31, 0x1E3CFCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E3CFCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E3CFCu) { return; }
    ctx->pc = 0x1E3CFCu;
label_1e3cfc:
    // 0x1e3cfc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e3cfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3d00: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e3d00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e3d04: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e3d04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3d08: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E3D08u;
    SET_GPR_U32(ctx, 31, 0x1E3D10u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E3D10u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E3D10u) { return; }
    ctx->pc = 0x1E3D10u;
label_1e3d10:
    // 0x1e3d10: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e3d14: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e3d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e3d18: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e3d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e3d1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d20: 0x0  nop
    ctx->pc = 0x1e3d20u;
    // NOP
    // 0x1e3d24: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e3d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e3d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d2c: 0x0  nop
    ctx->pc = 0x1e3d2cu;
    // NOP
    // 0x1e3d30: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e3d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e3d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3d38: 0x0  nop
    ctx->pc = 0x1e3d38u;
    // NOP
    // 0x1e3d3c: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e3d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    ctx->pc = 0x1e3d40u;
}
