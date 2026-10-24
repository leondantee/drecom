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

// Function: entry_001e2e58
// Address: 0x1e2e58 - 0x1e2f30
void entry_001e2e58_0x1e2e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2e58_0x1e2e58");
#endif

    switch (ctx->pc) {
        case 0x1e2eb0u: goto label_1e2eb0;
        case 0x1e2ec4u: goto label_1e2ec4;
        default: break;
    }

    ctx->pc = 0x1e2e58u;

    // 0x1e2e58: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2e5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e2e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e2e60: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1E2E60u;
    {
        const bool branch_taken_0x1e2e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2e60) {
            ctx->pc = 0x1E2F30u;
            return;
        }
    }
    ctx->pc = 0x1E2E68u;
    // 0x1e2e68: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e2e6c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e2e70: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e2e70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e2e74: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e2e74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e2e78: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2e7c: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e2e80: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e2e84: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e2e88: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e2e88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2e8c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1e2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e2e90: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e2e94: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e2e98: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e2e9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2ea0: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x1e2ea4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e2ea4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e2ea8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E2EA8u;
    SET_GPR_U32(ctx, 31, 0x1E2EB0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E2EB0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E2EB0u) { return; }
    ctx->pc = 0x1E2EB0u;
label_1e2eb0:
    // 0x1e2eb0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e2eb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e2eb4: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e2eb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e2eb8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e2eb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e2ebc: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E2EBCu;
    SET_GPR_U32(ctx, 31, 0x1E2EC4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E2EC4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E2EC4u) { return; }
    ctx->pc = 0x1E2EC4u;
label_1e2ec4:
    // 0x1e2ec4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e2ec8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e2ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e2ecc: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e2ed0: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1e2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1e2ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2ed8: 0x0  nop
    ctx->pc = 0x1e2ed8u;
    // NOP
    // 0x1e2edc: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e2edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e2ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e2ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2ee4: 0x0  nop
    ctx->pc = 0x1e2ee4u;
    // NOP
    // 0x1e2ee8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e2ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e2eec: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1e2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1e2ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2ef4: 0x0  nop
    ctx->pc = 0x1e2ef4u;
    // NOP
    // 0x1e2ef8: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e2ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e2efc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f04: 0x0  nop
    ctx->pc = 0x1e2f04u;
    // NOP
    // 0x1e2f08: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2f0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f14: 0x0  nop
    ctx->pc = 0x1e2f14u;
    // NOP
    // 0x1e2f18: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e2f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e2f1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e2f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2f24: 0x0  nop
    ctx->pc = 0x1e2f24u;
    // NOP
    // 0x1e2f28: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1e2f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x1e2f2c: 0x0  nop
    ctx->pc = 0x1e2f2cu;
    // NOP
    ctx->pc = 0x1e2f30u;
}
