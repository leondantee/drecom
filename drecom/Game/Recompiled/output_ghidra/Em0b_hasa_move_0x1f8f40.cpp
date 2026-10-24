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

// Function: Em0b_hasa_move
// Address: 0x1f8f40 - 0x1f97b4
void Em0b_hasa_move_0x1f8f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_hasa_move_0x1f8f40");
#endif

    switch (ctx->pc) {
        case 0x1f90b8u: goto label_1f90b8;
        case 0x1f9160u: goto label_1f9160;
        case 0x1f9184u: goto label_1f9184;
        case 0x1f91a4u: goto label_1f91a4;
        case 0x1f91b8u: goto label_1f91b8;
        case 0x1f9234u: goto label_1f9234;
        case 0x1f9240u: goto label_1f9240;
        case 0x1f9304u: goto label_1f9304;
        case 0x1f9348u: goto label_1f9348;
        case 0x1f9354u: goto label_1f9354;
        case 0x1f9384u: goto label_1f9384;
        case 0x1f93c8u: goto label_1f93c8;
        case 0x1f9458u: goto label_1f9458;
        case 0x1f94d0u: goto label_1f94d0;
        case 0x1f94d8u: goto label_1f94d8;
        case 0x1f9558u: goto label_1f9558;
        case 0x1f9568u: goto label_1f9568;
        case 0x1f9578u: goto label_1f9578;
        case 0x1f9598u: goto label_1f9598;
        case 0x1f95acu: goto label_1f95ac;
        case 0x1f95d0u: goto label_1f95d0;
        case 0x1f95f0u: goto label_1f95f0;
        case 0x1f9604u: goto label_1f9604;
        case 0x1f9650u: goto label_1f9650;
        case 0x1f969cu: goto label_1f969c;
        case 0x1f9788u: goto label_1f9788;
        default: break;
    }

    ctx->pc = 0x1f8f40u;

    // 0x1f8f40: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1f8f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1f8f44: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1f8f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1f8f48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f8f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f8f4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f8f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f8f50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f8f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f8f54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f8f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f8f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f8f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f8f60: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x1f8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x1f8f64: 0xafa50148  sw          $a1, 0x148($sp)
    ctx->pc = 0x1f8f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 5));
    // 0x1f8f68: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x1f8f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x1f8f6c: 0xafa70158  sw          $a3, 0x158($sp)
    ctx->pc = 0x1f8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 7));
    // 0x1f8f70: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1f8f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f8f74: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x1f8f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1f8f78: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x1f8f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x1f8f7c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1f8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f8f80: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x1f8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f8f84: 0x24910880  addiu       $s1, $a0, 0x880
    ctx->pc = 0x1f8f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2176));
    // 0x1f8f88: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1f8f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f8f8c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x1f8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1f8f90: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f8f94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8f98: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1f8f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f8f9c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1f8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1f8fa0: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x1f8fa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8fa4: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1f8fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f8fa8: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1f8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f8fac: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f8facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f8fb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8fb4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1f8fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f8fb8: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1f8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1f8fbc: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x1f8fbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8fc0: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1f8fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f8fc4: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x1f8fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1f8fc8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f8fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8fd0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1f8fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f8fd4: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1f8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1f8fd8: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x1f8fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8fdc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8fe0: 0x9463002e  lhu         $v1, 0x2E($v1)
    ctx->pc = 0x1f8fe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x1f8fe4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f8fe8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f8fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f8fec: 0x106001e7  beqz        $v1, . + 4 + (0x1E7 << 2)
    ctx->pc = 0x1F8FECu;
    {
        const bool branch_taken_0x1f8fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8fec) {
            ctx->pc = 0x1F978Cu;
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F8FF4u;
    // 0x1f8ff4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8ff8: 0x9463002e  lhu         $v1, 0x2E($v1)
    ctx->pc = 0x1f8ff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x1f8ffc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f9000: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1f9000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1f9004: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9004u;
    {
        const bool branch_taken_0x1f9004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9004) {
            ctx->pc = 0x1F9024u;
            goto label_1f9024;
        }
    }
    ctx->pc = 0x1F900Cu;
    // 0x1f900c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1f900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9010: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x1f9010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x1f9014: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x1f9014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x1f9018: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x1f9018u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f901c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9020: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x1f9020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
label_1f9024:
    // 0x1f9024: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x1f9024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x1f9028: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f9028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f902c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f902cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9030: 0x0  nop
    ctx->pc = 0x1f9030u;
    // NOP
    // 0x1f9034: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1f9034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1f9038: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1f9038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1f903c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f903cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f9040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9044: 0x0  nop
    ctx->pc = 0x1f9044u;
    // NOP
    // 0x1f9048: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1f9048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1f904c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f904cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9050: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x1f9050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x1f9054: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f9054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9058: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f9058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f905c: 0x108301cb  beq         $a0, $v1, . + 4 + (0x1CB << 2)
    ctx->pc = 0x1F905Cu;
    {
        const bool branch_taken_0x1f905c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f905c) {
            ctx->pc = 0x1F978Cu;
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F9064u;
    // 0x1f9064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f9064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9068: 0x108301aa  beq         $a0, $v1, . + 4 + (0x1AA << 2)
    ctx->pc = 0x1F9068u;
    {
        const bool branch_taken_0x1f9068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9068) {
            ctx->pc = 0x1F9714u;
            goto label_1f9714;
        }
    }
    ctx->pc = 0x1F9070u;
    // 0x1f9070: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f9070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9074: 0x1083014a  beq         $a0, $v1, . + 4 + (0x14A << 2)
    ctx->pc = 0x1F9074u;
    {
        const bool branch_taken_0x1f9074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9074) {
            ctx->pc = 0x1F95A0u;
            goto label_1f95a0;
        }
    }
    ctx->pc = 0x1F907Cu;
    // 0x1f907c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9080: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F9080u;
    {
        const bool branch_taken_0x1f9080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9080) {
            ctx->pc = 0x1F9154u;
            goto label_1f9154;
        }
    }
    ctx->pc = 0x1F9088u;
    // 0x1f9088: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9088u;
    {
        const bool branch_taken_0x1f9088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9088) {
            ctx->pc = 0x1F9098u;
            goto label_1f9098;
        }
    }
    ctx->pc = 0x1F9090u;
    // 0x1f9090: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x1F9090u;
    {
        const bool branch_taken_0x1f9090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9090) {
            ctx->pc = 0x1F978Cu;
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F9098u;
label_1f9098:
    // 0x1f9098: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x1f9098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1f909c: 0x344200a4  ori         $v0, $v0, 0xA4
    ctx->pc = 0x1f909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x1f90a0: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x1f90a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f90a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f90a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f90a8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x1f90a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1f90ac: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1f90acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f90b0: 0xc040c00  jal         func_103000
    ctx->pc = 0x1F90B0u;
    SET_GPR_U32(ctx, 31, 0x1F90B8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1F90B8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F90B8u) { return; }
    ctx->pc = 0x1F90B8u;
label_1f90b8:
    // 0x1f90b8: 0x960202d0  lhu         $v0, 0x2D0($s0)
    ctx->pc = 0x1f90b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x1f90bc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1f90bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1f90c0: 0xa60202d0  sh          $v0, 0x2D0($s0)
    ctx->pc = 0x1f90c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 720), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f90c4: 0x96020460  lhu         $v0, 0x460($s0)
    ctx->pc = 0x1f90c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1f90c8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1f90c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1f90cc: 0xa6020460  sh          $v0, 0x460($s0)
    ctx->pc = 0x1f90ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1120), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f90d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f90d4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f90d8: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x1f90d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f90dc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1f90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1f90e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f90e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f90e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f90e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f90e8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f90ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f90ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1f90f0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f90f4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1f90f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1f90f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f90f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f90fc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9100: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1f9100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1f9104: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9108: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f9108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f910c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f910cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9110: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9114: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f9114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f9118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f911c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9120: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1f9120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1f9124: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f9124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f9128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f912c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9130: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1f9130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1f9134: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f9134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f9138: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f913c: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x1f913cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9140: 0x3c02c59c  lui         $v0, 0xC59C
    ctx->pc = 0x1f9140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50588 << 16));
    // 0x1f9144: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f9144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f9148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f914c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9150: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f9150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1f9154:
    // 0x1f9154: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f9154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f9158: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1F9158u;
    SET_GPR_U32(ctx, 31, 0x1F9160u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1F9160u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F9160u) { return; }
    ctx->pc = 0x1F9160u;
label_1f9160:
    // 0x1f9160: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9164: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f9164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9168: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1f9168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1f916c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f9170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9174: 0x0  nop
    ctx->pc = 0x1f9174u;
    // NOP
    // 0x1f9178: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f9178u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f917c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F917Cu;
    SET_GPR_U32(ctx, 31, 0x1F9184u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F917Cu, 0x1F9184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9184u;
label_1f9184:
    // 0x1f9184: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9188: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f9188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f918c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9190: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f9190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f9194: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f9194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f9198: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1f9198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f919c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1F919Cu;
    SET_GPR_U32(ctx, 31, 0x1F91A4u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1F91A4u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F91A4u) { return; }
    ctx->pc = 0x1F91A4u;
label_1f91a4:
    // 0x1f91a4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1f91a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f91a8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1f91a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f91ac: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f91acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f91b0: 0xc040c00  jal         func_103000
    ctx->pc = 0x1F91B0u;
    SET_GPR_U32(ctx, 31, 0x1F91B8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1F91B8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F91B8u) { return; }
    ctx->pc = 0x1F91B8u;
label_1f91b8:
    // 0x1f91b8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f91bc: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1f91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f91c0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1f91c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f91c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f91c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f91c8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1f91c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1f91cc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f91d0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1f91d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f91d4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1f91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1f91d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f91d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f91dc: 0x0  nop
    ctx->pc = 0x1f91dcu;
    // NOP
    // 0x1f91e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f91e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f91e4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f91e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1f91e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f91e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f91ec: 0x0  nop
    ctx->pc = 0x1f91ecu;
    // NOP
    // 0x1f91f0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f91f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f91f4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1f91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1f91f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f91f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f91fc: 0x0  nop
    ctx->pc = 0x1f91fcu;
    // NOP
    // 0x1f9200: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f9200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1f9204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9208: 0x0  nop
    ctx->pc = 0x1f9208u;
    // NOP
    // 0x1f920c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f920cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f9210: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f9210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9218: 0x0  nop
    ctx->pc = 0x1f9218u;
    // NOP
    // 0x1f921c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f921cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1f9220: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f9220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9224: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f9224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f9228: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f922c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1F922Cu;
    SET_GPR_U32(ctx, 31, 0x1F9234u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1F9234u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F9234u) { return; }
    ctx->pc = 0x1F9234u;
label_1f9234:
    // 0x1f9234: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1f9234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f9238: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x1F9238u;
    SET_GPR_U32(ctx, 31, 0x1F9240u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x1F9238u, 0x1F9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9240u;
label_1f9240:
    // 0x1f9240: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f9240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1f9244: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x1f9244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x1f9248: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x1f9248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x1f924c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f924cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9250: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9254: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f9254u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f9258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f925c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F925Cu;
    {
        const bool branch_taken_0x1f925c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f925c) {
            ctx->pc = 0x1F9268u;
            goto label_1f9268;
        }
    }
    ctx->pc = 0x1F9264u;
    // 0x1f9264: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x1f9264u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f9268:
    // 0x1f9268: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f9268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f926c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9270: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f9270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f9274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9278: 0x0  nop
    ctx->pc = 0x1f9278u;
    // NOP
    // 0x1f927c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F927Cu;
    {
        const bool branch_taken_0x1f927c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f927c) {
            ctx->pc = 0x1F9290u;
            goto label_1f9290;
        }
    }
    ctx->pc = 0x1F9284u;
    // 0x1f9284: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f9284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9288: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f9288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f928c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1f9290:
    // 0x1f9290: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f9290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9294: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f9294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9298: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f9298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f929c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f929cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f92a0: 0x0  nop
    ctx->pc = 0x1f92a0u;
    // NOP
    // 0x1f92a4: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x1F92A4u;
    {
        const bool branch_taken_0x1f92a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f92a4) {
            ctx->pc = 0x1F9384u;
            goto label_1f9384;
        }
    }
    ctx->pc = 0x1F92ACu;
    // 0x1f92ac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f92acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f92b0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1f92b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f92b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f92b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f92b8: 0x0  nop
    ctx->pc = 0x1f92b8u;
    // NOP
    // 0x1f92bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f92bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f92c0: 0x0  nop
    ctx->pc = 0x1f92c0u;
    // NOP
    // 0x1f92c4: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1F92C4u;
    {
        const bool branch_taken_0x1f92c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f92c4) {
            ctx->pc = 0x1F9384u;
            goto label_1f9384;
        }
    }
    ctx->pc = 0x1F92CCu;
    // 0x1f92cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f92d0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f92d4: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x1f92d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f92d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f92dc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f92e0: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x1f92e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f92e4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f92e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f92e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f92ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f92ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f92f0: 0x24040527  addiu       $a0, $zero, 0x527
    ctx->pc = 0x1f92f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1319));
    // 0x1f92f4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1f92f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f92f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f92f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f92fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F92FCu;
    SET_GPR_U32(ctx, 31, 0x1F9304u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F92FCu, 0x1F9304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9304u;
label_1f9304:
    // 0x1f9304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9308: 0x0  nop
    ctx->pc = 0x1f9308u;
    // NOP
    // 0x1f930c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f930cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f9310: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1f9310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1f9314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9318: 0x0  nop
    ctx->pc = 0x1f9318u;
    // NOP
    // 0x1f931c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1f9320: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9324: 0x0  nop
    ctx->pc = 0x1f9324u;
    // NOP
    // 0x1f9328: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f9328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f932c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f932cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9334: 0x0  nop
    ctx->pc = 0x1f9334u;
    // NOP
    // 0x1f9338: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f9338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1f933c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1f933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f9340: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1F9340u;
    SET_GPR_U32(ctx, 31, 0x1F9348u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1F9340u, 0x1F9348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9348u;
label_1f9348:
    // 0x1f9348: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1f9348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f934c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1F934Cu;
    SET_GPR_U32(ctx, 31, 0x1F9354u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1F934Cu, 0x1F9354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9354u;
label_1f9354:
    // 0x1f9354: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f9354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f9358: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f935c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f935cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f9360: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1f9360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1f9364: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f9364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f9368: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1f9368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f936c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1f936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1f9370: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1f9370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9374: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1f9374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f9378: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x1f9378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f937c: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x1F937Cu;
    SET_GPR_U32(ctx, 31, 0x1F9384u);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x1F937Cu, 0x1F9384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9384u;
label_1f9384:
    // 0x1f9384: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1f9384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9388: 0x84a4002c  lh          $a0, 0x2C($a1)
    ctx->pc = 0x1f9388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1f938c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f9390: 0xa4a3002c  sh          $v1, 0x2C($a1)
    ctx->pc = 0x1f9390u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9394: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F9394u;
    {
        const bool branch_taken_0x1f9394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9394) {
            ctx->pc = 0x1F93C8u;
            goto label_1f93c8;
        }
    }
    ctx->pc = 0x1F939Cu;
    // 0x1f939c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f93a0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f93a4: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x1f93a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f93a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f93ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f93acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f93b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f93b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f93b4: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x1f93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x1f93b8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1f93b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f93bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f93bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f93c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F93C0u;
    SET_GPR_U32(ctx, 31, 0x1F93C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F93C0u, 0x1F93C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93C8u;
label_1f93c8:
    // 0x1f93c8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f93cc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1f93ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f93d0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1f93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1f93d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f93d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f93d8: 0x0  nop
    ctx->pc = 0x1f93d8u;
    // NOP
    // 0x1f93dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f93dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f93e0: 0x0  nop
    ctx->pc = 0x1f93e0u;
    // NOP
    // 0x1f93e4: 0x450000e9  bc1f        . + 4 + (0xE9 << 2)
    ctx->pc = 0x1F93E4u;
    {
        const bool branch_taken_0x1f93e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f93e4) {
            ctx->pc = 0x1F978Cu;
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F93ECu;
    // 0x1f93ec: 0xafb100f0  sw          $s1, 0xF0($sp)
    ctx->pc = 0x1f93ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 17));
    // 0x1f93f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f93f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f93f4: 0x0  nop
    ctx->pc = 0x1f93f4u;
    // NOP
    // 0x1f93f8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1f93f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1f93fc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1f93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1f9400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9404: 0x0  nop
    ctx->pc = 0x1f9404u;
    // NOP
    // 0x1f9408: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f9408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1f940c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f940cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9410: 0x0  nop
    ctx->pc = 0x1f9410u;
    // NOP
    // 0x1f9414: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1f9414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1f9418: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f9418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f941c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f941cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9420: 0x0  nop
    ctx->pc = 0x1f9420u;
    // NOP
    // 0x1f9424: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f9424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1f9428: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1f9428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1f942c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f942cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9430: 0x0  nop
    ctx->pc = 0x1f9430u;
    // NOP
    // 0x1f9434: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1f9434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1f9438: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f9438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f943c: 0xa7a20114  sh          $v0, 0x114($sp)
    ctx->pc = 0x1f943cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9440: 0xa3a00116  sb          $zero, 0x116($sp)
    ctx->pc = 0x1f9440u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 278), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9444: 0xa3a00117  sb          $zero, 0x117($sp)
    ctx->pc = 0x1f9444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 279), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9448: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1f9448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f944c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f9450: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F9450u;
    SET_GPR_U32(ctx, 31, 0x1F9458u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F9450u, 0x1F9458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9458u;
label_1f9458:
    // 0x1f9458: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x1F9458u;
    {
        const bool branch_taken_0x1f9458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9458) {
            ctx->pc = 0x1F978Cu;
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F9460u;
    // 0x1f9460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9464: 0x0  nop
    ctx->pc = 0x1f9464u;
    // NOP
    // 0x1f9468: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1f9468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1f946c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f946cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9470: 0x0  nop
    ctx->pc = 0x1f9470u;
    // NOP
    // 0x1f9474: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f9474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1f9478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f947c: 0x0  nop
    ctx->pc = 0x1f947cu;
    // NOP
    // 0x1f9480: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1f9480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1f9484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f9484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f948c: 0x0  nop
    ctx->pc = 0x1f948cu;
    // NOP
    // 0x1f9490: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1f9490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1f9494: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1f9494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f9498: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f9498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f949c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f949cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f94a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f94a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f94a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f94a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f94a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f94a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f94ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f94acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f94b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f94b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f94b4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f94b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f94b8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1f94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1f94bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f94bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f94c0: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x1f94c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f94c4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f94c4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f94c8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F94C8u;
    SET_GPR_U32(ctx, 31, 0x1F94D0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F94C8u, 0x1F94D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94D0u;
label_1f94d0:
    // 0x1f94d0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F94D0u;
    SET_GPR_U32(ctx, 31, 0x1F94D8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F94D0u, 0x1F94D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94D8u;
label_1f94d8:
    // 0x1f94d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F94D8u;
    {
        const bool branch_taken_0x1f94d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f94d8) {
            ctx->pc = 0x1F94F4u;
            goto label_1f94f4;
        }
    }
    ctx->pc = 0x1F94E0u;
    // 0x1f94e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f94e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f94e4: 0x0  nop
    ctx->pc = 0x1f94e4u;
    // NOP
    // 0x1f94e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f94e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f94ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F94ECu;
    {
        const bool branch_taken_0x1f94ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f94ec) {
            ctx->pc = 0x1F9510u;
            goto label_1f9510;
        }
    }
    ctx->pc = 0x1F94F4u;
label_1f94f4:
    // 0x1f94f4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1f94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1f94f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f94f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f94fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f94fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f9500: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9504: 0x0  nop
    ctx->pc = 0x1f9504u;
    // NOP
    // 0x1f9508: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f9508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f950c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1f950cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1f9510:
    // 0x1f9510: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1f9510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9514: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9518: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1f9518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1f951c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1f951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f9520: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1f9520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f9524: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f9524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f9528: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f9528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f952c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f9530: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f9530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f9534: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f9534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f9538: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f9538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f953c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1f953cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1f9540: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1f9540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1f9544: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f9544u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f9548: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x1f9548u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f954c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f954cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f9550: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F9550u;
    SET_GPR_U32(ctx, 31, 0x1F9558u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F9550u, 0x1F9558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9558u;
label_1f9558:
    // 0x1f9558: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f9558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f955c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1f955cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1f9560: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F9560u;
    SET_GPR_U32(ctx, 31, 0x1F9568u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F9560u, 0x1F9568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9568u;
label_1f9568:
    // 0x1f9568: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f9568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f956c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1f956cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1f9570: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F9570u;
    SET_GPR_U32(ctx, 31, 0x1F9578u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F9570u, 0x1F9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9578u;
label_1f9578:
    // 0x1f9578: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f9578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f957c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f9580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f9580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f9584: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f9584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f9588: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1f9588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f958c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f958cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f9590: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F9590u;
    SET_GPR_U32(ctx, 31, 0x1F9598u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F9590u, 0x1F9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9598u;
label_1f9598:
    // 0x1f9598: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1F9598u;
    {
        const bool branch_taken_0x1f9598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9598) {
            ctx->pc = 0x1F978Cu;
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F95A0u;
label_1f95a0:
    // 0x1f95a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f95a4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1F95A4u;
    SET_GPR_U32(ctx, 31, 0x1F95ACu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1F95ACu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F95ACu) { return; }
    ctx->pc = 0x1F95ACu;
label_1f95ac:
    // 0x1f95ac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f95acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f95b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f95b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f95b4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1f95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1f95b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f95b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f95bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f95bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f95c0: 0x0  nop
    ctx->pc = 0x1f95c0u;
    // NOP
    // 0x1f95c4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f95c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f95c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F95C8u;
    SET_GPR_U32(ctx, 31, 0x1F95D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F95C8u, 0x1F95D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95D0u;
label_1f95d0:
    // 0x1f95d0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f95d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f95d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f95d8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f95dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f95e0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f95e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f95e4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1f95e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f95e8: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1F95E8u;
    SET_GPR_U32(ctx, 31, 0x1F95F0u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1F95F0u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F95F0u) { return; }
    ctx->pc = 0x1F95F0u;
label_1f95f0:
    // 0x1f95f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1f95f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f95f4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1f95f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f95f8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f95f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f95fc: 0xc040c00  jal         func_103000
    ctx->pc = 0x1F95FCu;
    SET_GPR_U32(ctx, 31, 0x1F9604u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1F9604u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F9604u) { return; }
    ctx->pc = 0x1F9604u;
label_1f9604:
    // 0x1f9604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9608: 0x0  nop
    ctx->pc = 0x1f9608u;
    // NOP
    // 0x1f960c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f960cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f9610: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1f9610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1f9614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9618: 0x0  nop
    ctx->pc = 0x1f9618u;
    // NOP
    // 0x1f961c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1f9620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9624: 0x0  nop
    ctx->pc = 0x1f9624u;
    // NOP
    // 0x1f9628: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f9628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f962c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f962cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9634: 0x0  nop
    ctx->pc = 0x1f9634u;
    // NOP
    // 0x1f9638: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f9638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1f963c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9640: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f9640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f9644: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1f9644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9648: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1F9648u;
    SET_GPR_U32(ctx, 31, 0x1F9650u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1F9650u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F9650u) { return; }
    ctx->pc = 0x1F9650u;
label_1f9650:
    // 0x1f9650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9654: 0x0  nop
    ctx->pc = 0x1f9654u;
    // NOP
    // 0x1f9658: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1f9658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1f965c: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x1f965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x1f9660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9664: 0x0  nop
    ctx->pc = 0x1f9664u;
    // NOP
    // 0x1f9668: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1f9668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1f966c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f966cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9670: 0x0  nop
    ctx->pc = 0x1f9670u;
    // NOP
    // 0x1f9674: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1f9674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1f9678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f9678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f967c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f967cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9680: 0x0  nop
    ctx->pc = 0x1f9680u;
    // NOP
    // 0x1f9684: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1f9684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1f9688: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f9688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1f968c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f968cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f9690: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1f9690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1f9694: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1F9694u;
    SET_GPR_U32(ctx, 31, 0x1F969Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1F969Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F969Cu) { return; }
    ctx->pc = 0x1F969Cu;
label_1f969c:
    // 0x1f969c: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x1f969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f96a0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1f96a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f96a4: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1f96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1f96a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f96a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f96ac: 0x0  nop
    ctx->pc = 0x1f96acu;
    // NOP
    // 0x1f96b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f96b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f96b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f96b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f96b8: 0x0  nop
    ctx->pc = 0x1f96b8u;
    // NOP
    // 0x1f96bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F96BCu;
    {
        const bool branch_taken_0x1f96bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f96bc) {
            ctx->pc = 0x1F96DCu;
            goto label_1f96dc;
        }
    }
    ctx->pc = 0x1F96C4u;
    // 0x1f96c4: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x1f96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1f96c8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f96cc: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x1f96ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f96d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f96d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f96d4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f96d8: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x1f96d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
label_1f96dc:
    // 0x1f96dc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1f96dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f96e0: 0x84a4002a  lh          $a0, 0x2A($a1)
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1f96e4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f96e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f96e8: 0xa4a3002a  sh          $v1, 0x2A($a1)
    ctx->pc = 0x1f96e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f96ec: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F96ECu;
    {
        const bool branch_taken_0x1f96ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f96ec) {
            ctx->pc = 0x1F978Cu;
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F96F4u;
    // 0x1f96f4: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x1f96f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1f96f8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f96f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f96fc: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x1f96fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f9700: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f9700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9704: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f9704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9708: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x1f9708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f970c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F970Cu;
    {
        const bool branch_taken_0x1f970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f970c) {
            ctx->pc = 0x1F978Cu;
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F9714u;
label_1f9714:
    // 0x1f9714: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1f9714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9718: 0x84a4002a  lh          $a0, 0x2A($a1)
    ctx->pc = 0x1f9718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1f971c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f9720: 0xa4a3002a  sh          $v1, 0x2A($a1)
    ctx->pc = 0x1f9720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9724: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F9724u;
    {
        const bool branch_taken_0x1f9724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9724) {
            ctx->pc = 0x1F978Cu;
            goto label_1f978c;
        }
    }
    ctx->pc = 0x1F972Cu;
    // 0x1f972c: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x1f972cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9730: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x1f9730u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9734: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x1f9734u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9738: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x1f9738u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1f973c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f9740: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f9740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f9744: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1f9744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1f9748: 0x8e920034  lw          $s2, 0x34($s4)
    ctx->pc = 0x1f9748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1f974c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f9750: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f9750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f9754: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1f9754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1f9758: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f9758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f975c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9760: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x1f9760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9764: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f9768: 0x34704000  ori         $s0, $v1, 0x4000
    ctx->pc = 0x1f9768u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f976c: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1f976cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f9770: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x1f9770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x1f9774: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1f9774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f9778: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f9778u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f977c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f977cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f9780: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F9780u;
    SET_GPR_U32(ctx, 31, 0x1F9788u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F9780u, 0x1F9788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9788u;
label_1f9788:
    // 0x1f9788: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1f9788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f978c:
    // 0x1f978c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1f978cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f9790: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f9790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9794: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f9794u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9798: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f9798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f979c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f979cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f97a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f97a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f97a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f97a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f97a8: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x1f97a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1f97ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F97ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F97ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F97B4u;
}
