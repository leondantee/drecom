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

// Function: Em0e_ude_move
// Address: 0x24ac40 - 0x24b5a0
void Em0e_ude_move_0x24ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_ude_move_0x24ac40");
#endif

    switch (ctx->pc) {
        case 0x24acc0u: goto label_24acc0;
        case 0x24ad80u: goto label_24ad80;
        case 0x24adf0u: goto label_24adf0;
        case 0x24ae34u: goto label_24ae34;
        case 0x24ae40u: goto label_24ae40;
        case 0x24ae80u: goto label_24ae80;
        case 0x24ae98u: goto label_24ae98;
        case 0x24aeb8u: goto label_24aeb8;
        case 0x24af1cu: goto label_24af1c;
        case 0x24af34u: goto label_24af34;
        case 0x24af4cu: goto label_24af4c;
        case 0x24af94u: goto label_24af94;
        case 0x24afd0u: goto label_24afd0;
        case 0x24afecu: goto label_24afec;
        case 0x24b004u: goto label_24b004;
        case 0x24b038u: goto label_24b038;
        case 0x24b068u: goto label_24b068;
        case 0x24b074u: goto label_24b074;
        case 0x24b09cu: goto label_24b09c;
        case 0x24b140u: goto label_24b140;
        case 0x24b178u: goto label_24b178;
        case 0x24b188u: goto label_24b188;
        case 0x24b1dcu: goto label_24b1dc;
        case 0x24b22cu: goto label_24b22c;
        case 0x24b244u: goto label_24b244;
        case 0x24b264u: goto label_24b264;
        case 0x24b278u: goto label_24b278;
        case 0x24b290u: goto label_24b290;
        case 0x24b2a8u: goto label_24b2a8;
        case 0x24b2f0u: goto label_24b2f0;
        case 0x24b32cu: goto label_24b32c;
        case 0x24b348u: goto label_24b348;
        case 0x24b360u: goto label_24b360;
        case 0x24b394u: goto label_24b394;
        case 0x24b3c4u: goto label_24b3c4;
        case 0x24b3dcu: goto label_24b3dc;
        case 0x24b410u: goto label_24b410;
        case 0x24b424u: goto label_24b424;
        case 0x24b434u: goto label_24b434;
        case 0x24b464u: goto label_24b464;
        case 0x24b4b4u: goto label_24b4b4;
        case 0x24b520u: goto label_24b520;
        case 0x24b534u: goto label_24b534;
        default: break;
    }

    ctx->pc = 0x24ac40u;

    // 0x24ac40: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x24ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x24ac44: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x24ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x24ac48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24ac4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24ac50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24ac54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24ac58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24ac5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24ac60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24ac64: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x24ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
    // 0x24ac68: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x24ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24ac6c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x24ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x24ac70: 0x24750fa0  addiu       $s5, $v1, 0xFA0
    ctx->pc = 0x24ac70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x24ac74: 0x72a08628  paddub      $s0, $s5, $zero
    ctx->pc = 0x24ac74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x24ac78: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x24ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24ac7c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x24ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x24ac80: 0x24630280  addiu       $v1, $v1, 0x280
    ctx->pc = 0x24ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x24ac84: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x24ac84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24ac88: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x24ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24ac8c: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x24ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x24ac90: 0x24930240  addiu       $s3, $a0, 0x240
    ctx->pc = 0x24ac90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 576));
    // 0x24ac94: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24ac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24ac98: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x24ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x24ac9c: 0x24720100  addiu       $s2, $v1, 0x100
    ctx->pc = 0x24ac9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x24aca0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aca4: 0x94630020  lhu         $v1, 0x20($v1)
    ctx->pc = 0x24aca4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24aca8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x24aca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24acac: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x24acacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x24acb0: 0x10600230  beqz        $v1, . + 4 + (0x230 << 2)
    ctx->pc = 0x24ACB0u;
    {
        const bool branch_taken_0x24acb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24acb0) {
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24ACB8u;
    // 0x24acb8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24ACB8u;
    SET_GPR_U32(ctx, 31, 0x24ACC0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24ACB8u, 0x24ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ACC0u;
label_24acc0:
    // 0x24acc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24acc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24acc4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x24acc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24acc8: 0x30a4003f  andi        $a0, $a1, 0x3F
    ctx->pc = 0x24acc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x24accc: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x24acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x24acd0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x24acd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x24acd4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x24acd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x24acd8: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x24acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24acdc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24ace0: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x24ace0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x24ace4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ace8: 0x94630020  lhu         $v1, 0x20($v1)
    ctx->pc = 0x24ace8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24acec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x24acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x24acf0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x24acf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x24acf4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24ACF4u;
    {
        const bool branch_taken_0x24acf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24acf4) {
            ctx->pc = 0x24AD14u;
            goto label_24ad14;
        }
    }
    ctx->pc = 0x24ACFCu;
    // 0x24acfc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ad00: 0x94830020  lhu         $v1, 0x20($a0)
    ctx->pc = 0x24ad00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x24ad04: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x24ad04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x24ad08: 0xa4830020  sh          $v1, 0x20($a0)
    ctx->pc = 0x24ad08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x24ad0c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ad10: 0xa060001d  sb          $zero, 0x1D($v1)
    ctx->pc = 0x24ad10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 0));
label_24ad14:
    // 0x24ad14: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ad18: 0x9063001d  lbu         $v1, 0x1D($v1)
    ctx->pc = 0x24ad18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29)));
    // 0x24ad1c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x24ad1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24ad20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24ad24: 0x10830206  beq         $a0, $v1, . + 4 + (0x206 << 2)
    ctx->pc = 0x24AD24u;
    {
        const bool branch_taken_0x24ad24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24ad24) {
            ctx->pc = 0x24B540u;
            goto label_24b540;
        }
    }
    ctx->pc = 0x24AD2Cu;
    // 0x24ad2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ad30: 0x108301e2  beq         $a0, $v1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x24AD30u;
    {
        const bool branch_taken_0x24ad30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24ad30) {
            ctx->pc = 0x24B4BCu;
            goto label_24b4bc;
        }
    }
    ctx->pc = 0x24AD38u;
    // 0x24ad38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ad3c: 0x1083012b  beq         $a0, $v1, . + 4 + (0x12B << 2)
    ctx->pc = 0x24AD3Cu;
    {
        const bool branch_taken_0x24ad3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24ad3c) {
            ctx->pc = 0x24B1ECu;
            goto label_24b1ec;
        }
    }
    ctx->pc = 0x24AD44u;
    // 0x24ad44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ad48: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x24AD48u;
    {
        const bool branch_taken_0x24ad48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24ad48) {
            ctx->pc = 0x24AE34u;
            goto label_24ae34;
        }
    }
    ctx->pc = 0x24AD50u;
    // 0x24ad50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AD50u;
    {
        const bool branch_taken_0x24ad50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ad50) {
            ctx->pc = 0x24AD60u;
            goto label_24ad60;
        }
    }
    ctx->pc = 0x24AD58u;
    // 0x24ad58: 0x10000206  b           . + 4 + (0x206 << 2)
    ctx->pc = 0x24AD58u;
    {
        const bool branch_taken_0x24ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ad58) {
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24AD60u;
label_24ad60:
    // 0x24ad60: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x24ad60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x24ad64: 0x344200a4  ori         $v0, $v0, 0xA4
    ctx->pc = 0x24ad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x24ad68: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x24ad68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x24ad6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24ad6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24ad70: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x24ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x24ad74: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24ad74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24ad78: 0xc040c00  jal         func_103000
    ctx->pc = 0x24AD78u;
    SET_GPR_U32(ctx, 31, 0x24AD80u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24AD80u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AD80u) { return; }
    ctx->pc = 0x24AD80u;
label_24ad80:
    // 0x24ad80: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x24ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x24ad84: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ad88: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x24ad88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x24ad8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ad90: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ad94: 0xa043001d  sb          $v1, 0x1D($v0)
    ctx->pc = 0x24ad94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x24ad98: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24ad9c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x24ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ada0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ada4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24ada4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24ada8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24adac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24adacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24adb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24adb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adb4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24adb8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x24adb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24adbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24adbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adc0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24adc4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24adc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x24adc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24adc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adcc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24adccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24add0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x24add0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x24add4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24add4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24add8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24add8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24addc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24addcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ade0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24ade0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x24ade4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24ade8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24ADE8u;
    SET_GPR_U32(ctx, 31, 0x24ADF0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24ADF0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24ADF0u) { return; }
    ctx->pc = 0x24ADF0u;
label_24adf0:
    // 0x24adf0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x24adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x24adf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24adf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24adf8: 0x0  nop
    ctx->pc = 0x24adf8u;
    // NOP
    // 0x24adfc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x24adfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x24ae00: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x24ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x24ae04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ae04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ae08: 0x0  nop
    ctx->pc = 0x24ae08u;
    // NOP
    // 0x24ae0c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x24ae0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x24ae10: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x24ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x24ae14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ae14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ae18: 0x0  nop
    ctx->pc = 0x24ae18u;
    // NOP
    // 0x24ae1c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x24ae1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x24ae20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24ae20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24ae24: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24ae24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24ae28: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x24ae28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24ae2c: 0xc040c00  jal         func_103000
    ctx->pc = 0x24AE2Cu;
    SET_GPR_U32(ctx, 31, 0x24AE34u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24AE34u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AE34u) { return; }
    ctx->pc = 0x24AE34u;
label_24ae34:
    // 0x24ae34: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24ae38: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24AE38u;
    SET_GPR_U32(ctx, 31, 0x24AE40u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24AE40u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AE40u) { return; }
    ctx->pc = 0x24AE40u;
label_24ae40:
    // 0x24ae40: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ae44: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ae48: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x24ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x24ae4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24ae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24ae50: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x24ae50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x24ae54: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x24ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x24ae58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24ae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24ae5c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x24ae5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x24ae60: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24ae64: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x24ae64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24ae68: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x24ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24ae6c: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x24ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x24ae70: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x24ae70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x24ae74: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x24ae74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x24ae78: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x24AE78u;
    SET_GPR_U32(ctx, 31, 0x24AE80u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x24AE78u, 0x24AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE80u;
label_24ae80:
    // 0x24ae80: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ae84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ae88: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x24ae88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ae8c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24ae8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ae90: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24AE90u;
    SET_GPR_U32(ctx, 31, 0x24AE98u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24AE90u, 0x24AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE98u;
label_24ae98:
    // 0x24ae98: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ae9c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24aea0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aea4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x24aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aea8: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x24aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24aeac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24aeacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24aeb0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24AEB0u;
    SET_GPR_U32(ctx, 31, 0x24AEB8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24AEB0u, 0x24AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEB8u;
label_24aeb8:
    // 0x24aeb8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aebc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24aebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x24aec0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aec4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x24aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aec8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x24aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x24aecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24aeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aed0: 0x0  nop
    ctx->pc = 0x24aed0u;
    // NOP
    // 0x24aed4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24aed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24aed8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x24aed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x24aedc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24aee0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x24aee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24aee4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x24aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x24aee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24aee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24aeec: 0x0  nop
    ctx->pc = 0x24aeecu;
    // NOP
    // 0x24aef0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24aef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24aef4: 0x0  nop
    ctx->pc = 0x24aef4u;
    // NOP
    // 0x24aef8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24AEF8u;
    {
        const bool branch_taken_0x24aef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24aef8) {
            ctx->pc = 0x24AF10u;
            goto label_24af10;
        }
    }
    ctx->pc = 0x24AF00u;
    // 0x24af00: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x24af00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x24af04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24af04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af08: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24af0c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24af0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_24af10:
    // 0x24af10: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af14: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24AF14u;
    SET_GPR_U32(ctx, 31, 0x24AF1Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24AF1Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AF1Cu) { return; }
    ctx->pc = 0x24AF1Cu;
label_24af1c:
    // 0x24af1c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24af20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af24: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24af24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af28: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x24af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24af2c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x24AF2Cu;
    SET_GPR_U32(ctx, 31, 0x24AF34u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24AF34u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AF34u) { return; }
    ctx->pc = 0x24AF34u;
label_24af34:
    // 0x24af34: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24af38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24af38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af3c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af40: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x24af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24af44: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24AF44u;
    SET_GPR_U32(ctx, 31, 0x24AF4Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24AF4Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AF4Cu) { return; }
    ctx->pc = 0x24AF4Cu;
label_24af4c:
    // 0x24af4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24af4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af50: 0x0  nop
    ctx->pc = 0x24af50u;
    // NOP
    // 0x24af54: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24af54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24af58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24af58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af5c: 0x0  nop
    ctx->pc = 0x24af5cu;
    // NOP
    // 0x24af60: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24af60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24af64: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24af68: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x24af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24af6c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24af6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24af70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24af70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24af74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24af74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24af78: 0x0  nop
    ctx->pc = 0x24af78u;
    // NOP
    // 0x24af7c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24af7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24af80: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x24af80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24af84: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24af88: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x24af88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24af8c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24AF8Cu;
    SET_GPR_U32(ctx, 31, 0x24AF94u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24AF94u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AF94u) { return; }
    ctx->pc = 0x24AF94u;
label_24af94:
    // 0x24af94: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x24af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24af98: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24af98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24af9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24af9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24afa0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x24afa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x24afa4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x24afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afa8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x24afa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24afacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24afb0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x24afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x24afb4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x24afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afb8: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x24afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24afbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24afc0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x24afc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x24afc4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24afc8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24AFC8u;
    SET_GPR_U32(ctx, 31, 0x24AFD0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24AFD0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24AFD0u) { return; }
    ctx->pc = 0x24AFD0u;
label_24afd0:
    // 0x24afd0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24afd4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24afd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afd8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24afdc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24afe0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x24afe0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24afe4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24AFE4u;
    SET_GPR_U32(ctx, 31, 0x24AFECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24AFE4u, 0x24AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFECu;
label_24afec:
    // 0x24afec: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x24afecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x24aff0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24aff4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24aff8: 0xc7ac0158  lwc1        $f12, 0x158($sp)
    ctx->pc = 0x24aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24affc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24AFFCu;
    SET_GPR_U32(ctx, 31, 0x24B004u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24B004u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B004u) { return; }
    ctx->pc = 0x24B004u;
label_24b004:
    // 0x24b004: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x24b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b008: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b00c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b010: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24b010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b014: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x24b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b018: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b01c: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x24b01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b020: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24b024: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b028: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b02c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24b02cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b030: 0xc040c00  jal         func_103000
    ctx->pc = 0x24B030u;
    SET_GPR_U32(ctx, 31, 0x24B038u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24B038u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B038u) { return; }
    ctx->pc = 0x24B038u;
label_24b038:
    // 0x24b038: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b03c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x24b03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x24b040: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x24b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b044: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x24b044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x24b048: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x24b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b04c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x24b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x24b050: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b054: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x24b054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x24b058: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x24b058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x24b05c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b060: 0xc040ca2  jal         func_103288
    ctx->pc = 0x24B060u;
    SET_GPR_U32(ctx, 31, 0x24B068u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24B068u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B068u) { return; }
    ctx->pc = 0x24B068u;
label_24b068:
    // 0x24b068: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x24b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b06c: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x24B06Cu;
    SET_GPR_U32(ctx, 31, 0x24B074u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x24B06Cu, 0x24B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B074u;
label_24b074:
    // 0x24b074: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x24b074u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b078: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x24b078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x24b07c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x24B07Cu;
    {
        const bool branch_taken_0x24b07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b07c) {
            ctx->pc = 0x24B188u;
            goto label_24b188;
        }
    }
    ctx->pc = 0x24B084u;
    // 0x24b084: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x24b084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x24b088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24b088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b08c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24b08cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24b090: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b094: 0xc05cad8  jal         func_172B60
    ctx->pc = 0x24B094u;
    SET_GPR_U32(ctx, 31, 0x24B09Cu);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x24B094u, 0x24B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B09Cu;
label_24b09c:
    // 0x24b09c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24b09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b0a0: 0x0  nop
    ctx->pc = 0x24b0a0u;
    // NOP
    // 0x24b0a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24b0a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b0a8: 0x0  nop
    ctx->pc = 0x24b0a8u;
    // NOP
    // 0x24b0ac: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x24B0ACu;
    {
        const bool branch_taken_0x24b0ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b0ac) {
            ctx->pc = 0x24B188u;
            goto label_24b188;
        }
    }
    ctx->pc = 0x24B0B4u;
    // 0x24b0b4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b0b8: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x24b0b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x24b0bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24b0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24b0c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x24b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24b0c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x24b0c8: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x24b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x24b0cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b0d0: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x24b0d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b0d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b0d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b0dc: 0xa022edae  sb          $v0, -0x1252($at)
    ctx->pc = 0x24b0dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAEu, _value); } while (0);
    // 0x24b0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b0e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b0e8: 0xa022edaf  sb          $v0, -0x1251($at)
    ctx->pc = 0x24b0e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAFu, _value); } while (0);
    // 0x24b0ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b0f0: 0xa420edb4  sh          $zero, -0x124C($at)
    ctx->pc = 0x24b0f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB4u, _value); } while (0);
    // 0x24b0f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b0f8: 0xa420edb2  sh          $zero, -0x124E($at)
    ctx->pc = 0x24b0f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB2u, _value); } while (0);
    // 0x24b0fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24b100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b104: 0xa422edb6  sh          $v0, -0x124A($at)
    ctx->pc = 0x24b104u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB6u, _value); } while (0);
    // 0x24b108: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b10c: 0xa020edb0  sb          $zero, -0x1250($at)
    ctx->pc = 0x24b10cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDB0u, _value); } while (0);
    // 0x24b110: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b114: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b118: 0xac22edd0  sw          $v0, -0x1230($at)
    ctx->pc = 0x24b118u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEDD0u, _value); } while (0);
    // 0x24b11c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b120: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b124: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x24b124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x24b128: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24b128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24b12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b130: 0x0  nop
    ctx->pc = 0x24b130u;
    // NOP
    // 0x24b134: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24b134u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24b138: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B138u;
    SET_GPR_U32(ctx, 31, 0x24B140u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B138u, 0x24B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B140u;
label_24b140:
    // 0x24b140: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24b140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24b144: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x24b144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x24b148: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24b148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24b14c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b150: 0xa043001d  sb          $v1, 0x1D($v0)
    ctx->pc = 0x24b150u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x24b154: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b158: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24b158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24b15c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x24b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24b160: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x24b160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x24b164: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x24b164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x24b168: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x24b168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x24b16c: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x24b16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x24b170: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x24B170u;
    SET_GPR_U32(ctx, 31, 0x24B178u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x24B170u, 0x24B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B178u;
label_24b178:
    // 0x24b178: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x24b178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x24b17c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x24b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x24b180: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x24B180u;
    SET_GPR_U32(ctx, 31, 0x24B188u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x24B180u, 0x24B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B188u;
label_24b188:
    // 0x24b188: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b18c: 0x84830018  lh          $v1, 0x18($a0)
    ctx->pc = 0x24b18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x24b190: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24b194: 0xa4830018  sh          $v1, 0x18($a0)
    ctx->pc = 0x24b194u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x24b198: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b19c: 0x84630018  lh          $v1, 0x18($v1)
    ctx->pc = 0x24b19cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x24b1a0: 0x146000f4  bnez        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x24B1A0u;
    {
        const bool branch_taken_0x24b1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b1a0) {
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24B1A8u;
    // 0x24b1a8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24b1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b1b0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1b4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x24b1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x24b1b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b1bc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1c0: 0xa043001d  sb          $v1, 0x1D($v0)
    ctx->pc = 0x24b1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x24b1c4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b1cc: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x24b1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b1d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24b1d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b1d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B1D4u;
    SET_GPR_U32(ctx, 31, 0x24B1DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B1D4u, 0x24B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1DCu;
label_24b1dc:
    // 0x24b1dc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1e0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x24b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24b1e4: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x24B1E4u;
    {
        const bool branch_taken_0x24b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b1e4) {
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24B1ECu;
label_24b1ec:
    // 0x24b1ec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1f0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1f4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x24b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x24b1f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24b1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24b1fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x24b1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x24b200: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x24b200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x24b204: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24b208: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x24b208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x24b20c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24b210: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x24b210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24b214: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x24b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24b218: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x24b218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x24b21c: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x24b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x24b220: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x24b220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x24b224: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x24B224u;
    SET_GPR_U32(ctx, 31, 0x24B22Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x24B224u, 0x24B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B22Cu;
label_24b22c:
    // 0x24b22c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b230: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b234: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x24b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b238: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24b238u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b23c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B23Cu;
    SET_GPR_U32(ctx, 31, 0x24B244u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B23Cu, 0x24B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B244u;
label_24b244:
    // 0x24b244: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b248: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24b248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24b24c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b250: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x24b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b254: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x24b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b258: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24b258u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b25c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B25Cu;
    SET_GPR_U32(ctx, 31, 0x24B264u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B25Cu, 0x24B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B264u;
label_24b264:
    // 0x24b264: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b268: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24b268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x24b26c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b270: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24B270u;
    SET_GPR_U32(ctx, 31, 0x24B278u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24B278u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B278u) { return; }
    ctx->pc = 0x24B278u;
label_24b278:
    // 0x24b278: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b27c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b280: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b284: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x24b284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24b288: 0xc040d0e  jal         func_103438
    ctx->pc = 0x24B288u;
    SET_GPR_U32(ctx, 31, 0x24B290u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24B290u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B290u) { return; }
    ctx->pc = 0x24B290u;
label_24b290:
    // 0x24b290: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b294: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b298: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b29c: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x24b29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24b2a0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24B2A0u;
    SET_GPR_U32(ctx, 31, 0x24B2A8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24B2A8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B2A8u) { return; }
    ctx->pc = 0x24B2A8u;
label_24b2a8:
    // 0x24b2a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24b2a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b2ac: 0x0  nop
    ctx->pc = 0x24b2acu;
    // NOP
    // 0x24b2b0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b2b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24b2b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b2b8: 0x0  nop
    ctx->pc = 0x24b2b8u;
    // NOP
    // 0x24b2bc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24b2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b2c0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b2c4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x24b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b2c8: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24b2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b2cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24b2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b2d4: 0x0  nop
    ctx->pc = 0x24b2d4u;
    // NOP
    // 0x24b2d8: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24b2dc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x24b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24b2e0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b2e4: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x24b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24b2e8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24B2E8u;
    SET_GPR_U32(ctx, 31, 0x24B2F0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24B2F0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B2F0u) { return; }
    ctx->pc = 0x24B2F0u;
label_24b2f0:
    // 0x24b2f0: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x24b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b2f4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24b2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b2f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24b2f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b2fc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x24b2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x24b300: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x24b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b304: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x24b304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b308: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24b308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b30c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x24b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x24b310: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x24b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b314: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x24b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b318: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24b318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b31c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x24b31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x24b320: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b324: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24B324u;
    SET_GPR_U32(ctx, 31, 0x24B32Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24B32Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B32Cu) { return; }
    ctx->pc = 0x24B32Cu;
label_24b32c:
    // 0x24b32c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b330: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b334: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b338: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24b338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b33c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x24b33cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b340: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B340u;
    SET_GPR_U32(ctx, 31, 0x24B348u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B340u, 0x24B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B348u;
label_24b348:
    // 0x24b348: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x24b348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x24b34c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b350: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b354: 0xc7ac0158  lwc1        $f12, 0x158($sp)
    ctx->pc = 0x24b354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24b358: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24B358u;
    SET_GPR_U32(ctx, 31, 0x24B360u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24B360u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B360u) { return; }
    ctx->pc = 0x24B360u;
label_24b360:
    // 0x24b360: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x24b360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b364: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b368: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b36c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24b36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b370: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x24b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b374: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24b374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b378: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x24b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b37c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24b380: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b384: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b388: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24b388u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b38c: 0xc040c00  jal         func_103000
    ctx->pc = 0x24B38Cu;
    SET_GPR_U32(ctx, 31, 0x24B394u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24B394u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B394u) { return; }
    ctx->pc = 0x24B394u;
label_24b394:
    // 0x24b394: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b398: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x24b398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x24b39c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x24b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b3a0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x24b3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x24b3a4: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x24b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b3a8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x24b3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x24b3ac: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b3b0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x24b3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x24b3b4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x24b3b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x24b3b8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b3bc: 0xc040ca2  jal         func_103288
    ctx->pc = 0x24B3BCu;
    SET_GPR_U32(ctx, 31, 0x24B3C4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24B3C4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B3C4u) { return; }
    ctx->pc = 0x24B3C4u;
label_24b3c4:
    // 0x24b3c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24b3c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24b3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b3cc: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x24b3ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x24b3d0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b3d4: 0xc05cad8  jal         func_172B60
    ctx->pc = 0x24B3D4u;
    SET_GPR_U32(ctx, 31, 0x24B3DCu);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x24B3D4u, 0x24B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3DCu;
label_24b3dc:
    // 0x24b3dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24b3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b3e0: 0x0  nop
    ctx->pc = 0x24b3e0u;
    // NOP
    // 0x24b3e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24b3e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b3e8: 0x0  nop
    ctx->pc = 0x24b3e8u;
    // NOP
    // 0x24b3ec: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x24B3ECu;
    {
        const bool branch_taken_0x24b3ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b3ec) {
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24B3F4u;
    // 0x24b3f4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x24b3f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x24b3f8: 0x3042ff5b  andi        $v0, $v0, 0xFF5B
    ctx->pc = 0x24b3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65371);
    // 0x24b3fc: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x24b3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x24b400: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24b400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24b404: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x24b404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x24b408: 0xc040c44  jal         func_103110
    ctx->pc = 0x24B408u;
    SET_GPR_U32(ctx, 31, 0x24B410u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x24B410u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B410u) { return; }
    ctx->pc = 0x24B410u;
label_24b410:
    // 0x24b410: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24b410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b414: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x24b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24b418: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24b418u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b41c: 0xc040c00  jal         func_103000
    ctx->pc = 0x24B41Cu;
    SET_GPR_U32(ctx, 31, 0x24B424u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24B424u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B424u) { return; }
    ctx->pc = 0x24B424u;
label_24b424:
    // 0x24b424: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x24b424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x24b428: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24b428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b42c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x24B42Cu;
    SET_GPR_U32(ctx, 31, 0x24B434u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24B434u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B434u) { return; }
    ctx->pc = 0x24B434u;
label_24b434:
    // 0x24b434: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b438: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x24b438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24b43c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x24b43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x24b440: 0xa4620020  sh          $v0, 0x20($v1)
    ctx->pc = 0x24b440u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x24b444: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b448: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24b44c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x24b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24b450: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x24b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x24b454: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x24b454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x24b458: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24b458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24b45c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24B45Cu;
    SET_GPR_U32(ctx, 31, 0x24B464u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24B464u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B464u) { return; }
    ctx->pc = 0x24B464u;
label_24b464:
    // 0x24b464: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x24b464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x24b468: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x24b468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x24b46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b470: 0x0  nop
    ctx->pc = 0x24b470u;
    // NOP
    // 0x24b474: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x24b474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x24b478: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x24b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x24b47c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x24b47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x24b480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b484: 0x0  nop
    ctx->pc = 0x24b484u;
    // NOP
    // 0x24b488: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x24b488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x24b48c: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x24b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x24b490: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x24b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x24b494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b498: 0x0  nop
    ctx->pc = 0x24b498u;
    // NOP
    // 0x24b49c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x24b49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x24b4a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24b4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b4a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24b4a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b4a8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x24b4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24b4ac: 0xc040c00  jal         func_103000
    ctx->pc = 0x24B4ACu;
    SET_GPR_U32(ctx, 31, 0x24B4B4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24B4B4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B4B4u) { return; }
    ctx->pc = 0x24B4B4u;
label_24b4b4:
    // 0x24b4b4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x24B4B4u;
    {
        const bool branch_taken_0x24b4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b4b4) {
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24B4BCu;
label_24b4bc:
    // 0x24b4bc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x24b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b4c0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x24b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x24b4c4: 0x24750280  addiu       $s5, $v1, 0x280
    ctx->pc = 0x24b4c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x24b4c8: 0x3c03c110  lui         $v1, 0xC110
    ctx->pc = 0x24b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49424 << 16));
    // 0x24b4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4d0: 0x0  nop
    ctx->pc = 0x24b4d0u;
    // NOP
    // 0x24b4d4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b4d8: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x24b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x24b4dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4e0: 0x0  nop
    ctx->pc = 0x24b4e0u;
    // NOP
    // 0x24b4e4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24b4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b4e8: 0x3c034274  lui         $v1, 0x4274
    ctx->pc = 0x24b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17012 << 16));
    // 0x24b4ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b4ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b4f0: 0x0  nop
    ctx->pc = 0x24b4f0u;
    // NOP
    // 0x24b4f4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24b4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b4f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x24b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x24b4fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b500: 0x0  nop
    ctx->pc = 0x24b500u;
    // NOP
    // 0x24b504: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24b508: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24b508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24b50c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x24b50cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24b510: 0x27b30140  addiu       $s3, $sp, 0x140
    ctx->pc = 0x24b510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24b514: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x24b514u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x24b518: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24B518u;
    SET_GPR_U32(ctx, 31, 0x24B520u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24B520u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B520u) { return; }
    ctx->pc = 0x24B520u;
label_24b520:
    // 0x24b520: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24b520u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b524: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x24b524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x24b528: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24b528u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b52c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x24B52Cu;
    SET_GPR_U32(ctx, 31, 0x24B534u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24B534u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B534u) { return; }
    ctx->pc = 0x24B534u;
label_24b534:
    // 0x24b534: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x24b534u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b538: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x24B538u;
    {
        const bool branch_taken_0x24b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b538) {
            ctx->pc = 0x24B574u;
            goto label_24b574;
        }
    }
    ctx->pc = 0x24B540u;
label_24b540:
    // 0x24b540: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x24b540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x24b544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b548: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b54c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x24b54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x24b550: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24b550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b554: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b558: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x24b558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x24b55c: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x24b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b560: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x24b560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24b564: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x24b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24b568: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x24b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x24b56c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24b56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24b570: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x24b570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_24b574:
    // 0x24b574: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x24b574u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24b578: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24b578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24b57c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24b57cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b580: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24b580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b584: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24b584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b588: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24b588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b58c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24b58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24b590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b594: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x24b594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x24b598: 0x3e00008  jr          $ra
    ctx->pc = 0x24B598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B5A0u;
}
