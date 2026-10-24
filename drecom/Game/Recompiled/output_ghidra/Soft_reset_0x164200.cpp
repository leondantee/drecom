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

// Function: Soft_reset
// Address: 0x164200 - 0x1643a4
void Soft_reset_0x164200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Soft_reset_0x164200");
#endif

    switch (ctx->pc) {
        case 0x164220u: goto label_164220;
        case 0x164284u: goto label_164284;
        case 0x16428cu: goto label_16428c;
        case 0x1642a4u: goto label_1642a4;
        case 0x1642b0u: goto label_1642b0;
        case 0x1642f0u: goto label_1642f0;
        case 0x1642fcu: goto label_1642fc;
        case 0x164308u: goto label_164308;
        case 0x164314u: goto label_164314;
        case 0x164320u: goto label_164320;
        case 0x16432cu: goto label_16432c;
        case 0x164348u: goto label_164348;
        case 0x164354u: goto label_164354;
        case 0x16438cu: goto label_16438c;
        default: break;
    }

    ctx->pc = 0x164200u;

    // 0x164200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164204: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x164204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x164208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16420c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164210: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x164210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x164214: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x164214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x164218: 0xc067c48  jal         func_19F120
    ctx->pc = 0x164218u;
    SET_GPR_U32(ctx, 31, 0x164220u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x164218u, 0x164220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164220u;
label_164220:
    // 0x164220: 0xae200a88  sw          $zero, 0xA88($s1)
    ctx->pc = 0x164220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2696), GPR_U32(ctx, 0));
    // 0x164224: 0xae200a84  sw          $zero, 0xA84($s1)
    ctx->pc = 0x164224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2692), GPR_U32(ctx, 0));
    // 0x164228: 0x8e220a60  lw          $v0, 0xA60($s1)
    ctx->pc = 0x164228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2656)));
    // 0x16422c: 0xae220a68  sw          $v0, 0xA68($s1)
    ctx->pc = 0x16422cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2664), GPR_U32(ctx, 2));
    // 0x164230: 0xae2019c8  sw          $zero, 0x19C8($s1)
    ctx->pc = 0x164230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6600), GPR_U32(ctx, 0));
    // 0x164234: 0xae201a20  sw          $zero, 0x1A20($s1)
    ctx->pc = 0x164234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6688), GPR_U32(ctx, 0));
    // 0x164238: 0xae201a1c  sw          $zero, 0x1A1C($s1)
    ctx->pc = 0x164238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6684), GPR_U32(ctx, 0));
    // 0x16423c: 0xae2019bc  sw          $zero, 0x19BC($s1)
    ctx->pc = 0x16423cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6588), GPR_U32(ctx, 0));
    // 0x164240: 0xae201a18  sw          $zero, 0x1A18($s1)
    ctx->pc = 0x164240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6680), GPR_U32(ctx, 0));
    // 0x164244: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164248: 0x8c221a40  lw          $v0, 0x1A40($at)
    ctx->pc = 0x164248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x16424c: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x16424cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x164250: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164254: 0xac221a40  sw          $v0, 0x1A40($at)
    ctx->pc = 0x164254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A40u, _value); } while (0);
    // 0x164258: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16425c: 0x8c231a44  lw          $v1, 0x1A44($at)
    ctx->pc = 0x16425cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A44u));
    // 0x164260: 0x3c028440  lui         $v0, 0x8440
    ctx->pc = 0x164260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33856 << 16));
    // 0x164264: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x164264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x164268: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16426c: 0xac221a44  sw          $v0, 0x1A44($at)
    ctx->pc = 0x16426cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A44u, _value); } while (0);
    // 0x164270: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x164270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x164274: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x164274u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164278: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x164278u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16427c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x16427Cu;
    SET_GPR_U32(ctx, 31, 0x164284u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x16427Cu, 0x164284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164284u;
label_164284:
    // 0x164284: 0xc06130c  jal         func_184C30
    ctx->pc = 0x164284u;
    SET_GPR_U32(ctx, 31, 0x16428Cu);
    ctx->pc = 0x184C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184C30u, 0x164284u, 0x16428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16428Cu;
label_16428c:
    // 0x16428c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x16428cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x164290: 0xa02095a0  sb          $zero, -0x6A60($at)
    ctx->pc = 0x164290u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x164294: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x164294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x164298: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x164298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x16429c: 0xc0685c8  jal         func_1A1720
    ctx->pc = 0x16429Cu;
    SET_GPR_U32(ctx, 31, 0x1642A4u);
    ctx->pc = 0x1A1720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1720u, 0x16429Cu, 0x1642A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642A4u;
label_1642a4:
    // 0x1642a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1642a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1642a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1642A8u;
    {
        const bool branch_taken_0x1642a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1642a8) {
            ctx->pc = 0x1642D0u;
            goto label_1642d0;
        }
    }
    ctx->pc = 0x1642B0u;
label_1642b0:
    // 0x1642b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1642b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1642b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1642b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1642b8: 0xac401a24  sw          $zero, 0x1A24($v0)
    ctx->pc = 0x1642b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6692), GPR_U32(ctx, 0));
    // 0x1642bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1642bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1642c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1642c4: 0xac401a44  sw          $zero, 0x1A44($v0)
    ctx->pc = 0x1642c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6724), GPR_U32(ctx, 0));
    // 0x1642c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1642c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1642cc: 0x0  nop
    ctx->pc = 0x1642ccu;
    // NOP
label_1642d0:
    // 0x1642d0: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1642d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1642d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1642D4u;
    {
        const bool branch_taken_0x1642d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1642d4) {
            ctx->pc = 0x1642B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1642b0;
        }
    }
    ctx->pc = 0x1642DCu;
    // 0x1642dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1642dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1642e0: 0xac20fde0  sw          $zero, -0x220($at)
    ctx->pc = 0x1642e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CFDE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFDE0u, _value); } while (0);
    // 0x1642e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1642e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1642e8: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x1642E8u;
    SET_GPR_U32(ctx, 31, 0x1642F0u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x1642E8u, 0x1642F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642F0u;
label_1642f0:
    // 0x1642f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1642f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1642f4: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x1642F4u;
    SET_GPR_U32(ctx, 31, 0x1642FCu);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x1642F4u, 0x1642FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642FCu;
label_1642fc:
    // 0x1642fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1642fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164300: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x164300u;
    SET_GPR_U32(ctx, 31, 0x164308u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x164300u, 0x164308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164308u;
label_164308:
    // 0x164308: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x164308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16430c: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x16430Cu;
    SET_GPR_U32(ctx, 31, 0x164314u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x16430Cu, 0x164314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164314u;
label_164314:
    // 0x164314: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x164314u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164318: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164318u;
    {
        const bool branch_taken_0x164318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164318) {
            ctx->pc = 0x164330u;
            goto label_164330;
        }
    }
    ctx->pc = 0x164320u;
label_164320:
    // 0x164320: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x164320u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x164324: 0xc084900  jal         func_212400
    ctx->pc = 0x164324u;
    SET_GPR_U32(ctx, 31, 0x16432Cu);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x164324u, 0x16432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16432Cu;
label_16432c:
    // 0x16432c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16432cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_164330:
    // 0x164330: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x164330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x164334: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x164334u;
    {
        const bool branch_taken_0x164334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164334) {
            ctx->pc = 0x164320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164320;
        }
    }
    ctx->pc = 0x16433Cu;
    // 0x16433c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x16433cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x164340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x164340u;
    {
        const bool branch_taken_0x164340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164340) {
            ctx->pc = 0x164358u;
            goto label_164358;
        }
    }
    ctx->pc = 0x164348u;
label_164348:
    // 0x164348: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x164348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16434c: 0xc0592dc  jal         func_164B70
    ctx->pc = 0x16434Cu;
    SET_GPR_U32(ctx, 31, 0x164354u);
    ctx->pc = 0x164B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B70u, 0x16434Cu, 0x164354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164354u;
label_164354:
    // 0x164354: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x164354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_164358:
    // 0x164358: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x164358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16435c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16435Cu;
    {
        const bool branch_taken_0x16435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16435c) {
            ctx->pc = 0x164348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164348;
        }
    }
    ctx->pc = 0x164364u;
    // 0x164364: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16436c: 0xa0222880  sb          $v0, 0x2880($at)
    ctx->pc = 0x16436cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D2880u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2880u, _value); } while (0);
    // 0x164370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164374: 0xa0202881  sb          $zero, 0x2881($at)
    ctx->pc = 0x164374u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2881u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2881u, _value); } while (0);
    // 0x164378: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x164378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16437c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x16437cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x164380: 0x24451770  addiu       $a1, $v0, 0x1770
    ctx->pc = 0x164380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x164384: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x164384u;
    SET_GPR_U32(ctx, 31, 0x16438Cu);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x164384u, 0x16438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16438Cu;
label_16438c:
    // 0x16438c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x16438cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164398: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x164398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16439c: 0x3e00008  jr          $ra
    ctx->pc = 0x16439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16439Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1643A4u;
}
