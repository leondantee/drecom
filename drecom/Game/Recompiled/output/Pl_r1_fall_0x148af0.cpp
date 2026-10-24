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

// Function: Pl_r1_fall
// Address: 0x148af0 - 0x148e6c
void Pl_r1_fall_0x148af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_fall_0x148af0");
#endif

    switch (ctx->pc) {
        case 0x148b70u: goto label_148b70;
        case 0x148c14u: goto label_148c14;
        case 0x148c38u: goto label_148c38;
        case 0x148c44u: goto label_148c44;
        case 0x148c58u: goto label_148c58;
        case 0x148c64u: goto label_148c64;
        case 0x148c88u: goto label_148c88;
        case 0x148ca4u: goto label_148ca4;
        case 0x148cfcu: goto label_148cfc;
        case 0x148d04u: goto label_148d04;
        case 0x148d2cu: goto label_148d2c;
        case 0x148d3cu: goto label_148d3c;
        case 0x148d50u: goto label_148d50;
        case 0x148d7cu: goto label_148d7c;
        case 0x148d88u: goto label_148d88;
        case 0x148d9cu: goto label_148d9c;
        case 0x148da8u: goto label_148da8;
        case 0x148db8u: goto label_148db8;
        case 0x148dd0u: goto label_148dd0;
        case 0x148df8u: goto label_148df8;
        default: break;
    }

    ctx->pc = 0x148af0u;

    // 0x148af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148af4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x148af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x148af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148afc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x148afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x148b00: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x148b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x148b04: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x148b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x148b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b0c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x148b0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148b10: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x148b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x148b14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x148b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x148b18: 0x10830094  beq         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x148B18u;
    {
        const bool branch_taken_0x148b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x148b18) {
            ctx->pc = 0x148D6Cu;
            goto label_148d6c;
        }
    }
    ctx->pc = 0x148B20u;
    // 0x148b20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x148b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148b24: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x148B24u;
    {
        const bool branch_taken_0x148b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x148b24) {
            ctx->pc = 0x148CB4u;
            goto label_148cb4;
        }
    }
    ctx->pc = 0x148B2Cu;
    // 0x148b2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148b30: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x148B30u;
    {
        const bool branch_taken_0x148b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x148b30) {
            ctx->pc = 0x148BF0u;
            goto label_148bf0;
        }
    }
    ctx->pc = 0x148B38u;
    // 0x148b38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148B38u;
    {
        const bool branch_taken_0x148b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x148b38) {
            ctx->pc = 0x148B48u;
            goto label_148b48;
        }
    }
    ctx->pc = 0x148B40u;
    // 0x148b40: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x148B40u;
    {
        const bool branch_taken_0x148b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148b40) {
            ctx->pc = 0x148E58u;
            goto label_148e58;
        }
    }
    ctx->pc = 0x148B48u;
label_148b48:
    // 0x148b48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b4c: 0xac4013f0  sw          $zero, 0x13F0($v0)
    ctx->pc = 0x148b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5104), GPR_U32(ctx, 0));
    // 0x148b50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148b5c: 0x24060a98  addiu       $a2, $zero, 0xA98
    ctx->pc = 0x148b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2712));
    // 0x148b60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148b64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148b68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148B68u;
    SET_GPR_U32(ctx, 31, 0x148B70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148B68u, 0x148B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B70u;
label_148b70:
    // 0x148b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b74: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x148b74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x148b78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x148b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x148b80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x148b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x148b84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x148b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x148b88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148B88u;
    {
        const bool branch_taken_0x148b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148b88) {
            ctx->pc = 0x148B9Cu;
            goto label_148b9c;
        }
    }
    ctx->pc = 0x148B90u;
    // 0x148b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x148b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148b94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148b98: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x148b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_148b9c:
    // 0x148b9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ba0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x148ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x148ba4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x148ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x148ba8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x148ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x148bac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148BACu;
    {
        const bool branch_taken_0x148bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148bac) {
            ctx->pc = 0x148BC8u;
            goto label_148bc8;
        }
    }
    ctx->pc = 0x148BB4u;
    // 0x148bb4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x148bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x148bb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148bbc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x148bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x148bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x148BC0u;
    {
        const bool branch_taken_0x148bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148bc0) {
            ctx->pc = 0x148BD0u;
            goto label_148bd0;
        }
    }
    ctx->pc = 0x148BC8u;
label_148bc8:
    // 0x148bc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148bcc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x148bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_148bd0:
    // 0x148bd0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x148bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x148bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148bd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148bdc: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x148bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x148be0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148be4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148bec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x148becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_148bf0:
    // 0x148bf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148bf4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x148bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x148bf8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x148bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x148bfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x148bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x148c00: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x148c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x148c04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c08: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x148c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x148c0c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x148C0Cu;
    SET_GPR_U32(ctx, 31, 0x148C14u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x148C0Cu, 0x148C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C14u;
label_148c14:
    // 0x148c14: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x148c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x148c18: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x148c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x148c1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x148c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148c20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c28: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x148c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x148c2c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x148c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x148c30: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x148C30u;
    SET_GPR_U32(ctx, 31, 0x148C38u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x148C38u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x148C38u) { return; }
    ctx->pc = 0x148C38u;
label_148c38:
    // 0x148c38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x148C3Cu;
    SET_GPR_U32(ctx, 31, 0x148C44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x148C3Cu, 0x148C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C44u;
label_148c44:
    // 0x148c44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148c48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148c4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148c50: 0xc057480  jal         func_15D200
    ctx->pc = 0x148C50u;
    SET_GPR_U32(ctx, 31, 0x148C58u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x148C50u, 0x148C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C58u;
label_148c58:
    // 0x148c58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c5c: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x148C5Cu;
    SET_GPR_U32(ctx, 31, 0x148C64u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x148C5Cu, 0x148C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C64u;
label_148c64:
    // 0x148c64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148C64u;
    {
        const bool branch_taken_0x148c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148c64) {
            ctx->pc = 0x148C7Cu;
            goto label_148c7c;
        }
    }
    ctx->pc = 0x148C6Cu;
    // 0x148c6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c70: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148c78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x148c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_148c7c:
    // 0x148c7c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148c7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148c80: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x148C80u;
    SET_GPR_U32(ctx, 31, 0x148C88u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148C80u, 0x148C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C88u;
label_148c88:
    // 0x148c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c8c: 0xc4401388  lwc1        $f0, 0x1388($v0)
    ctx->pc = 0x148c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148c90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c94: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x148c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
    // 0x148c98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148c9c: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x148C9Cu;
    SET_GPR_U32(ctx, 31, 0x148CA4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x148C9Cu, 0x148CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CA4u;
label_148ca4:
    // 0x148ca4: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x148CA4u;
    {
        const bool branch_taken_0x148ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148ca4) {
            ctx->pc = 0x148E58u;
            goto label_148e58;
        }
    }
    ctx->pc = 0x148CACu;
    // 0x148cac: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x148CACu;
    {
        const bool branch_taken_0x148cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148cac) {
            ctx->pc = 0x148E58u;
            goto label_148e58;
        }
    }
    ctx->pc = 0x148CB4u;
label_148cb4:
    // 0x148cb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148cb8: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x148cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148cbc: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x148cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x148cc0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x148cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x148cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148cc8: 0x0  nop
    ctx->pc = 0x148cc8u;
    // NOP
    // 0x148ccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148cd0: 0x0  nop
    ctx->pc = 0x148cd0u;
    // NOP
    // 0x148cd4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x148CD4u;
    {
        const bool branch_taken_0x148cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148cd4) {
            ctx->pc = 0x148D0Cu;
            goto label_148d0c;
        }
    }
    ctx->pc = 0x148CDCu;
    // 0x148cdc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ce0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ce4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148ce8: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x148ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x148cec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148cf0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148cf4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148CF4u;
    SET_GPR_U32(ctx, 31, 0x148CFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148CF4u, 0x148CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CFCu;
label_148cfc:
    // 0x148cfc: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x148CFCu;
    SET_GPR_U32(ctx, 31, 0x148D04u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x148CFCu, 0x148D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D04u;
label_148d04:
    // 0x148d04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x148D04u;
    {
        const bool branch_taken_0x148d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148d04) {
            ctx->pc = 0x148D50u;
            goto label_148d50;
        }
    }
    ctx->pc = 0x148D0Cu;
label_148d0c:
    // 0x148d0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148d18: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x148d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x148d1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x148d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148d20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148d24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148D24u;
    SET_GPR_U32(ctx, 31, 0x148D2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148D24u, 0x148D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D2Cu;
label_148d2c:
    // 0x148d2c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x148d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x148d30: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x148d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x148d34: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x148D34u;
    SET_GPR_U32(ctx, 31, 0x148D3Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x148D34u, 0x148D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D3Cu;
label_148d3c:
    // 0x148d3c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x148d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x148d40: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x148d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x148d44: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x148d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x148d48: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x148D48u;
    SET_GPR_U32(ctx, 31, 0x148D50u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x148D48u, 0x148D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D50u;
label_148d50:
    // 0x148d50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148d54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d58: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x148d58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x148d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d60: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148d64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148d68: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x148d68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_148d6c:
    // 0x148d6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148d70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148d74: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x148D74u;
    SET_GPR_U32(ctx, 31, 0x148D7Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x148D74u, 0x148D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D7Cu;
label_148d7c:
    // 0x148d7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d80: 0xc05cd10  jal         func_173440
    ctx->pc = 0x148D80u;
    SET_GPR_U32(ctx, 31, 0x148D88u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x148D80u, 0x148D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D88u;
label_148d88:
    // 0x148d88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148d8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148d90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148d90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148d94: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x148D94u;
    SET_GPR_U32(ctx, 31, 0x148D9Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x148D94u, 0x148D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148D9Cu;
label_148d9c:
    // 0x148d9c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148d9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148da0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x148DA0u;
    SET_GPR_U32(ctx, 31, 0x148DA8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148DA0u, 0x148DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DA8u;
label_148da8:
    // 0x148da8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148dac: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x148db0: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x148DB0u;
    SET_GPR_U32(ctx, 31, 0x148DB8u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x148DB0u, 0x148DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DB8u;
label_148db8:
    // 0x148db8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x148DB8u;
    {
        const bool branch_taken_0x148db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148db8) {
            ctx->pc = 0x148E58u;
            goto label_148e58;
        }
    }
    ctx->pc = 0x148DC0u;
    // 0x148dc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148dc4: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x148dc8: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x148DC8u;
    SET_GPR_U32(ctx, 31, 0x148DD0u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x148DC8u, 0x148DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DD0u;
label_148dd0:
    // 0x148dd0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x148DD0u;
    {
        const bool branch_taken_0x148dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148dd0) {
            ctx->pc = 0x148E58u;
            goto label_148e58;
        }
    }
    ctx->pc = 0x148DD8u;
    // 0x148dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148ddc: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x148ddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x148de0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x148de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x148de4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x148de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x148de8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x148DE8u;
    {
        const bool branch_taken_0x148de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148de8) {
            ctx->pc = 0x148E10u;
            goto label_148e10;
        }
    }
    ctx->pc = 0x148DF0u;
    // 0x148df0: 0xc0585dc  jal         func_161770
    ctx->pc = 0x148DF0u;
    SET_GPR_U32(ctx, 31, 0x148DF8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x148DF0u, 0x148DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DF8u;
label_148df8:
    // 0x148df8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148DF8u;
    {
        const bool branch_taken_0x148df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148df8) {
            ctx->pc = 0x148E10u;
            goto label_148e10;
        }
    }
    ctx->pc = 0x148E00u;
    // 0x148e00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e04: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x148e04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x148e08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x148E08u;
    {
        const bool branch_taken_0x148e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e08) {
            ctx->pc = 0x148E58u;
            goto label_148e58;
        }
    }
    ctx->pc = 0x148E10u;
label_148e10:
    // 0x148e10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e14: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x148e18: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x148E18u;
    {
        const bool branch_taken_0x148e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148e18) {
            ctx->pc = 0x148E58u;
            goto label_148e58;
        }
    }
    ctx->pc = 0x148E20u;
    // 0x148e20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148e24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x148e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x148e2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e30: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x148e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x148e34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x148e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x148e3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x148e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x148e44: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x148e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x148e48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e4c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x148e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x148e50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148e54: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x148e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_148e58:
    // 0x148e58: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x148e58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148e60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x148e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x148e64: 0x3e00008  jr          $ra
    ctx->pc = 0x148E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148E6Cu;
}
