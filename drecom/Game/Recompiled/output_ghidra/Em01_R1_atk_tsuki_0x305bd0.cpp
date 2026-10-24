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

// Function: Em01_R1_atk_tsuki
// Address: 0x305bd0 - 0x305dc4
void Em01_R1_atk_tsuki_0x305bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_atk_tsuki_0x305bd0");
#endif

    switch (ctx->pc) {
        case 0x305c2cu: goto label_305c2c;
        case 0x305cacu: goto label_305cac;
        case 0x305d14u: goto label_305d14;
        case 0x305d34u: goto label_305d34;
        case 0x305d44u: goto label_305d44;
        case 0x305d50u: goto label_305d50;
        case 0x305d60u: goto label_305d60;
        case 0x305d6cu: goto label_305d6c;
        default: break;
    }

    ctx->pc = 0x305bd0u;

    // 0x305bd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x305bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x305bd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x305bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x305bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x305bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x305bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x305bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x305be0: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x305be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x305be4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305be8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x305be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x305bec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x305becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x305bf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305bf4: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x305BF4u;
    {
        const bool branch_taken_0x305bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x305bf4) {
            ctx->pc = 0x305C4Cu;
            goto label_305c4c;
        }
    }
    ctx->pc = 0x305BFCu;
    // 0x305bfc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305BFCu;
    {
        const bool branch_taken_0x305bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x305bfc) {
            ctx->pc = 0x305C0Cu;
            goto label_305c0c;
        }
    }
    ctx->pc = 0x305C04u;
    // 0x305c04: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x305C04u;
    {
        const bool branch_taken_0x305c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c04) {
            ctx->pc = 0x305DACu;
            goto label_305dac;
        }
    }
    ctx->pc = 0x305C0Cu;
label_305c0c:
    // 0x305c0c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x305c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x305c18: 0x24062815  addiu       $a2, $zero, 0x2815
    ctx->pc = 0x305c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10261));
    // 0x305c1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x305c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305c20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x305c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305c24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x305C24u;
    SET_GPR_U32(ctx, 31, 0x305C2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x305C24u, 0x305C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C2Cu;
label_305c2c:
    // 0x305c2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c30: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x305c30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x305c34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c38: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305c38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x305c3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c40: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x305c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x305c44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305c48: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x305c48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_305c4c:
    // 0x305c4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c50: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x305c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x305c54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x305c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x305c58: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x305c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x305c5c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x305C5Cu;
    {
        const bool branch_taken_0x305c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c5c) {
            ctx->pc = 0x305D34u;
            goto label_305d34;
        }
    }
    ctx->pc = 0x305C64u;
    // 0x305c64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c68: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x305c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x305c6c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x305C6Cu;
    {
        const bool branch_taken_0x305c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305c6c) {
            ctx->pc = 0x305D34u;
            goto label_305d34;
        }
    }
    ctx->pc = 0x305C74u;
    // 0x305c74: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305c78: 0x24429680  addiu       $v0, $v0, -0x6980
    ctx->pc = 0x305c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940288));
    // 0x305c7c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x305c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305c80: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305c80u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399680u));
    // 0x305c84: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305c84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305c88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c8c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305c90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c94: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x305c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305c98: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x305c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305c9c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x305c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x305ca0: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x305ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x305ca4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x305CA4u;
    SET_GPR_U32(ctx, 31, 0x305CACu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x305CA4u, 0x305CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CACu;
label_305cac:
    // 0x305cac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x305cacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305cb0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305CB0u;
    {
        const bool branch_taken_0x305cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305cb0) {
            ctx->pc = 0x305D34u;
            goto label_305d34;
        }
    }
    ctx->pc = 0x305CB8u;
    // 0x305cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305cbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305cc0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x305cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x305cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305cc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305ccc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x305cccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x305cd0: 0x2402050a  addiu       $v0, $zero, 0x50A
    ctx->pc = 0x305cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x305cd4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x305cd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x305cd8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305cdc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305ce0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x305ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305ce4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x305ce4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305ce8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x305ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305cec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x305cecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x305cf0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x305cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x305cf4: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x305cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x305cf8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x305cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x305cfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305d00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x305d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305d04: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305d08: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x305d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x305d0c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x305D0Cu;
    SET_GPR_U32(ctx, 31, 0x305D14u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x305D14u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x305D14u) { return; }
    ctx->pc = 0x305D14u;
label_305d14:
    // 0x305d14: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x305d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x305d18: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x305d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x305d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305d20: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x305d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x305d24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305d28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x305d28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305d2c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x305D2Cu;
    SET_GPR_U32(ctx, 31, 0x305D34u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x305D2Cu, 0x305D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D34u;
label_305d34:
    // 0x305d34: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305d38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305d3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305D3Cu;
    SET_GPR_U32(ctx, 31, 0x305D44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305D3Cu, 0x305D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D44u;
label_305d44:
    // 0x305d44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305D48u;
    SET_GPR_U32(ctx, 31, 0x305D50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305D48u, 0x305D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D50u;
label_305d50:
    // 0x305d50: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305d54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305d58: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305D58u;
    SET_GPR_U32(ctx, 31, 0x305D60u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305D58u, 0x305D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D60u;
label_305d60:
    // 0x305d60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d64: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305D64u;
    SET_GPR_U32(ctx, 31, 0x305D6Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305D64u, 0x305D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D6Cu;
label_305d6c:
    // 0x305d6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305d74: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305D74u;
    {
        const bool branch_taken_0x305d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305d74) {
            ctx->pc = 0x305DACu;
            goto label_305dac;
        }
    }
    ctx->pc = 0x305D7Cu;
    // 0x305d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305d80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x305d88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305d8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d90: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x305d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x305d94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d98: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x305d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305d9c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305da0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305da4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305da8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x305da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_305dac:
    // 0x305dac: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x305dacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305db8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x305db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x305DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305DC4u;
}
