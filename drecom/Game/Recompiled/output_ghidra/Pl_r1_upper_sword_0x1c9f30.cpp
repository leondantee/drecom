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

// Function: Pl_r1_upper_sword
// Address: 0x1c9f30 - 0x1ca904
void Pl_r1_upper_sword_0x1c9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_upper_sword_0x1c9f30");
#endif

    switch (ctx->pc) {
        case 0x1ca06cu: goto label_1ca06c;
        case 0x1ca094u: goto label_1ca094;
        case 0x1ca0bcu: goto label_1ca0bc;
        case 0x1ca184u: goto label_1ca184;
        case 0x1ca1b0u: goto label_1ca1b0;
        case 0x1ca204u: goto label_1ca204;
        case 0x1ca230u: goto label_1ca230;
        case 0x1ca25cu: goto label_1ca25c;
        case 0x1ca2a8u: goto label_1ca2a8;
        case 0x1ca2c4u: goto label_1ca2c4;
        case 0x1ca2d4u: goto label_1ca2d4;
        case 0x1ca2e8u: goto label_1ca2e8;
        case 0x1ca3f4u: goto label_1ca3f4;
        case 0x1ca400u: goto label_1ca400;
        case 0x1ca414u: goto label_1ca414;
        case 0x1ca420u: goto label_1ca420;
        case 0x1ca50cu: goto label_1ca50c;
        case 0x1ca514u: goto label_1ca514;
        case 0x1ca534u: goto label_1ca534;
        case 0x1ca544u: goto label_1ca544;
        case 0x1ca5c4u: goto label_1ca5c4;
        case 0x1ca688u: goto label_1ca688;
        case 0x1ca6bcu: goto label_1ca6bc;
        case 0x1ca778u: goto label_1ca778;
        case 0x1ca784u: goto label_1ca784;
        case 0x1ca798u: goto label_1ca798;
        case 0x1ca7b0u: goto label_1ca7b0;
        case 0x1ca82cu: goto label_1ca82c;
        case 0x1ca858u: goto label_1ca858;
        default: break;
    }

    ctx->pc = 0x1c9f30u;

    // 0x1c9f30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c9f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c9f34: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1c9f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1c9f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c9f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c9f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9f40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9f44: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1c9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1c9f48: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c9f4c: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c9f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c9f50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9f54: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c9f58: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1c9f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1c9f5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9F5Cu;
    {
        const bool branch_taken_0x1c9f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f5c) {
            ctx->pc = 0x1C9F70u;
            goto label_1c9f70;
        }
    }
    ctx->pc = 0x1C9F64u;
    // 0x1c9f64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9f68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1c9f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9f6c: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1c9f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1c9f70:
    // 0x1c9f70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9f74: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1c9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c9f78: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1c9f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1c9f7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9f80: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1c9f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1c9f84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1c9f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9f88: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1c9f8c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9F8Cu;
    {
        const bool branch_taken_0x1c9f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f8c) {
            ctx->pc = 0x1C9FB4u;
            goto label_1c9fb4;
        }
    }
    ctx->pc = 0x1C9F94u;
    // 0x1c9f94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9f98: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c9f98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c9f9c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1c9f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1c9fa0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c9fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c9fa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9fa8: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1c9fa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1c9fac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1c9facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9fb0: 0xa0601921  sb          $zero, 0x1921($v1)
    ctx->pc = 0x1c9fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6433), (uint8_t)GPR_U32(ctx, 0));
label_1c9fb4:
    // 0x1c9fb4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1c9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9fb8: 0xc4601388  lwc1        $f0, 0x1388($v1)
    ctx->pc = 0x1c9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9fbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1c9fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9fc0: 0xe4601b5c  swc1        $f0, 0x1B5C($v1)
    ctx->pc = 0x1c9fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7004), bits); }
    // 0x1c9fc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9fc8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1c9fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1c9fcc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1c9fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c9fd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c9fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9fd4: 0x10a301bd  beq         $a1, $v1, . + 4 + (0x1BD << 2)
    ctx->pc = 0x1C9FD4u;
    {
        const bool branch_taken_0x1c9fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9fd4) {
            ctx->pc = 0x1CA6CCu;
            goto label_1ca6cc;
        }
    }
    ctx->pc = 0x1C9FDCu;
    // 0x1c9fdc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9fe0: 0x10a401a1  beq         $a1, $a0, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x1C9FE0u;
    {
        const bool branch_taken_0x1c9fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c9fe0) {
            ctx->pc = 0x1CA668u;
            goto label_1ca668;
        }
    }
    ctx->pc = 0x1C9FE8u;
    // 0x1c9fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9fec: 0x10a3004a  beq         $a1, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C9FECu;
    {
        const bool branch_taken_0x1c9fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c9fec) {
            ctx->pc = 0x1CA118u;
            goto label_1ca118;
        }
    }
    ctx->pc = 0x1C9FF4u;
    // 0x1c9ff4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9FF4u;
    {
        const bool branch_taken_0x1c9ff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ff4) {
            ctx->pc = 0x1CA004u;
            goto label_1ca004;
        }
    }
    ctx->pc = 0x1C9FFCu;
    // 0x1c9ffc: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x1C9FFCu;
    {
        const bool branch_taken_0x1c9ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ffc) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA004u;
label_1ca004:
    // 0x1ca004: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1ca004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca008: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1ca008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ca00c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1ca00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1ca010: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1ca010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ca014: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1ca014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1ca018: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1ca018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1ca01c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca020: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1ca020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ca024: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ca024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca028: 0x10a4001c  beq         $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CA028u;
    {
        const bool branch_taken_0x1ca028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ca028) {
            ctx->pc = 0x1CA09Cu;
            goto label_1ca09c;
        }
    }
    ctx->pc = 0x1CA030u;
    // 0x1ca030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca034: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CA034u;
    {
        const bool branch_taken_0x1ca034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca034) {
            ctx->pc = 0x1CA074u;
            goto label_1ca074;
        }
    }
    ctx->pc = 0x1CA03Cu;
    // 0x1ca03c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA03Cu;
    {
        const bool branch_taken_0x1ca03c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca03c) {
            ctx->pc = 0x1CA04Cu;
            goto label_1ca04c;
        }
    }
    ctx->pc = 0x1CA044u;
    // 0x1ca044: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CA044u;
    {
        const bool branch_taken_0x1ca044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca044) {
            ctx->pc = 0x1CA0BCu;
            goto label_1ca0bc;
        }
    }
    ctx->pc = 0x1CA04Cu;
label_1ca04c:
    // 0x1ca04c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca050: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca054: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca058: 0x2406078f  addiu       $a2, $zero, 0x78F
    ctx->pc = 0x1ca058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1935));
    // 0x1ca05c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca064: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA064u;
    SET_GPR_U32(ctx, 31, 0x1CA06Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA064u, 0x1CA06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA06Cu;
label_1ca06c:
    // 0x1ca06c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA06Cu;
    {
        const bool branch_taken_0x1ca06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca06c) {
            ctx->pc = 0x1CA0BCu;
            goto label_1ca0bc;
        }
    }
    ctx->pc = 0x1CA074u;
label_1ca074:
    // 0x1ca074: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca078: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca07c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca080: 0x24060791  addiu       $a2, $zero, 0x791
    ctx->pc = 0x1ca080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1937));
    // 0x1ca084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca088: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca08c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA08Cu;
    SET_GPR_U32(ctx, 31, 0x1CA094u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA08Cu, 0x1CA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA094u;
label_1ca094:
    // 0x1ca094: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA094u;
    {
        const bool branch_taken_0x1ca094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca094) {
            ctx->pc = 0x1CA0BCu;
            goto label_1ca0bc;
        }
    }
    ctx->pc = 0x1CA09Cu;
label_1ca09c:
    // 0x1ca09c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca0a8: 0x24060792  addiu       $a2, $zero, 0x792
    ctx->pc = 0x1ca0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1938));
    // 0x1ca0ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca0b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca0b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA0B4u;
    SET_GPR_U32(ctx, 31, 0x1CA0BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA0B4u, 0x1CA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0BCu;
label_1ca0bc:
    // 0x1ca0bc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1ca0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ca0c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0c4: 0xa0441576  sb          $a0, 0x1576($v0)
    ctx->pc = 0x1ca0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca0c8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1ca0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ca0cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0d0: 0xa0431577  sb          $v1, 0x1577($v0)
    ctx->pc = 0x1ca0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca0d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ca0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca0d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0dc: 0xa4851278  sh          $a1, 0x1278($a0)
    ctx->pc = 0x1ca0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ca0e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ca0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca0e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0e8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ca0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ca0ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0f0: 0xac401b6c  sw          $zero, 0x1B6C($v0)
    ctx->pc = 0x1ca0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 0));
    // 0x1ca0f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca0f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0fc: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1ca0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    // 0x1ca100: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca104: 0xa04013b4  sb          $zero, 0x13B4($v0)
    ctx->pc = 0x1ca104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5044), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca108: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca10c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1ca10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ca110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca114: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1ca114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ca118:
    // 0x1ca118: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca11c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1ca11cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ca120: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1ca120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1ca124: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA124u;
    {
        const bool branch_taken_0x1ca124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca124) {
            ctx->pc = 0x1CA138u;
            goto label_1ca138;
        }
    }
    ctx->pc = 0x1CA12Cu;
    // 0x1ca12c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ca12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca130: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca134: 0xa04313a7  sb          $v1, 0x13A7($v0)
    ctx->pc = 0x1ca134u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5031), (uint8_t)GPR_U32(ctx, 3));
label_1ca138:
    // 0x1ca138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca13c: 0x84431278  lh          $v1, 0x1278($v0)
    ctx->pc = 0x1ca13cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1ca140: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CA140u;
    {
        const bool branch_taken_0x1ca140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca140) {
            ctx->pc = 0x1CA1C0u;
            goto label_1ca1c0;
        }
    }
    ctx->pc = 0x1CA148u;
    // 0x1ca148: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca14c: 0x84441278  lh          $a0, 0x1278($v0)
    ctx->pc = 0x1ca14cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1ca150: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x1ca150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ca154: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x1ca154u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ca158: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca15c: 0x8c4413e8  lw          $a0, 0x13E8($v0)
    ctx->pc = 0x1ca15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1ca160: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1CA160u;
    {
        const bool branch_taken_0x1ca160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca160) {
            ctx->pc = 0x1CA238u;
            goto label_1ca238;
        }
    }
    ctx->pc = 0x1CA168u;
    // 0x1ca168: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca16c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca170: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1ca170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1ca174: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1ca174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ca178: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1ca178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1ca17c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CA17Cu;
    SET_GPR_U32(ctx, 31, 0x1CA184u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CA17Cu, 0x1CA184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA184u;
label_1ca184:
    // 0x1ca184: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca188: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1ca188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1ca18c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1ca18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1ca190: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ca190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ca194: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ca194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ca198: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca19c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1a0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1ca1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca1a4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1ca1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca1a8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CA1A8u;
    SET_GPR_U32(ctx, 31, 0x1CA1B0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CA1A8u, 0x1CA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1B0u;
label_1ca1b0:
    // 0x1ca1b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ca1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ca1b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CA1B8u;
    {
        const bool branch_taken_0x1ca1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1b8) {
            ctx->pc = 0x1CA238u;
            goto label_1ca238;
        }
    }
    ctx->pc = 0x1CA1C0u;
label_1ca1c0:
    // 0x1ca1c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1c4: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1ca1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1ca1c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA1C8u;
    {
        const bool branch_taken_0x1ca1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1c8) {
            ctx->pc = 0x1CA238u;
            goto label_1ca238;
        }
    }
    ctx->pc = 0x1CA1D0u;
    // 0x1ca1d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1d4: 0x8443127e  lh          $v1, 0x127E($v0)
    ctx->pc = 0x1ca1d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1ca1d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ca1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ca1dc: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ca1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ca1e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca1e4: 0xc4611290  lwc1        $f1, 0x1290($v1)
    ctx->pc = 0x1ca1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca1e8: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1ca1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1ca1ec: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ca1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ca1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca1f4: 0x0  nop
    ctx->pc = 0x1ca1f4u;
    // NOP
    // 0x1ca1f8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1ca1f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ca1fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1CA1FCu;
    SET_GPR_U32(ctx, 31, 0x1CA204u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1CA1FCu, 0x1CA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA204u;
label_1ca204:
    // 0x1ca204: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca208: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x1ca208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x1ca20c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca210: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ca210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca214: 0x3c053c49  lui         $a1, 0x3C49
    ctx->pc = 0x1ca214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15433 << 16));
    // 0x1ca218: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x1ca218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1ca21c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca21cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca220: 0x0  nop
    ctx->pc = 0x1ca220u;
    // NOP
    // 0x1ca224: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1ca224u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ca228: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1CA228u;
    SET_GPR_U32(ctx, 31, 0x1CA230u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1CA228u, 0x1CA230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA230u;
label_1ca230:
    // 0x1ca230: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca234: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1ca234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1ca238:
    // 0x1ca238: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca23c: 0x906309da  lbu         $v1, 0x9DA($v1)
    ctx->pc = 0x1ca23cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2522)));
    // 0x1ca240: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca244: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ca244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ca248: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1ca248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ca24c: 0x14640026  bne         $v1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CA24Cu;
    {
        const bool branch_taken_0x1ca24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ca24c) {
            ctx->pc = 0x1CA2E8u;
            goto label_1ca2e8;
        }
    }
    ctx->pc = 0x1CA254u;
    // 0x1ca254: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1CA254u;
    SET_GPR_U32(ctx, 31, 0x1CA25Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CA254u, 0x1CA25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA25Cu;
label_1ca25c:
    // 0x1ca25c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ca25cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ca260: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ca260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca264: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x1ca264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1ca268: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1ca268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ca26c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ca26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ca270: 0x24639228  addiu       $v1, $v1, -0x6DD8
    ctx->pc = 0x1ca270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939176));
    // 0x1ca274: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ca274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ca278: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1ca278u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca27c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x1ca27cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ca280: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca284: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1ca284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ca288: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1ca28c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ca28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ca290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca294: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1ca294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ca298: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1ca298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1ca29c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ca29cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca2a0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CA2A0u;
    SET_GPR_U32(ctx, 31, 0x1CA2A8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CA2A0u, 0x1CA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2A8u;
label_1ca2a8:
    // 0x1ca2a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca2ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ca2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca2b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ca2b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca2b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ca2b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca2b8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ca2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca2bc: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CA2BCu;
    SET_GPR_U32(ctx, 31, 0x1CA2C4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CA2BCu, 0x1CA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2C4u;
label_1ca2c4:
    // 0x1ca2c4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1ca2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1ca2c8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1ca2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1ca2cc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CA2CCu;
    SET_GPR_U32(ctx, 31, 0x1CA2D4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CA2CCu, 0x1CA2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2D4u;
label_1ca2d4:
    // 0x1ca2d4: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1ca2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1ca2d8: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1ca2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x1ca2dc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1ca2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1ca2e0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CA2E0u;
    SET_GPR_U32(ctx, 31, 0x1CA2E8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CA2E0u, 0x1CA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2E8u;
label_1ca2e8:
    // 0x1ca2e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca2ec: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ca2ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ca2f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ca2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca2f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1ca2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1ca2f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CA2F8u;
    {
        const bool branch_taken_0x1ca2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2f8) {
            ctx->pc = 0x1CA334u;
            goto label_1ca334;
        }
    }
    ctx->pc = 0x1CA300u;
    // 0x1ca300: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca304: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ca304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca308: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1ca30c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ca30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ca310: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ca310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ca314: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca318: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ca318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca31c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1ca31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1ca320: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ca320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca324: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ca324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ca328: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ca328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ca32c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA32Cu;
    {
        const bool branch_taken_0x1ca32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca32c) {
            ctx->pc = 0x1CA34Cu;
            goto label_1ca34c;
        }
    }
    ctx->pc = 0x1CA334u;
label_1ca334:
    // 0x1ca334: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca338: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ca338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca33c: 0x3c027fbf  lui         $v0, 0x7FBF
    ctx->pc = 0x1ca33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32703 << 16));
    // 0x1ca340: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ca340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca344: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ca344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ca348: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ca348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1ca34c:
    // 0x1ca34c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca350: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ca350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ca354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ca354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca358: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ca358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1ca35c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CA35Cu;
    {
        const bool branch_taken_0x1ca35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca35c) {
            ctx->pc = 0x1CA3E4u;
            goto label_1ca3e4;
        }
    }
    ctx->pc = 0x1CA364u;
    // 0x1ca364: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca368: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1ca368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ca36c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ca36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ca370: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ca370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ca374: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca378: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1ca378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1ca37c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca384: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1ca384u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca388: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca38c: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1ca38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1ca390: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CA390u;
    {
        const bool branch_taken_0x1ca390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca390) {
            ctx->pc = 0x1CA3E4u;
            goto label_1ca3e4;
        }
    }
    ctx->pc = 0x1CA398u;
    // 0x1ca398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca39c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3a0: 0xac431b6c  sw          $v1, 0x1B6C($v0)
    ctx->pc = 0x1ca3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 3));
    // 0x1ca3a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3a8: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1ca3a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1ca3ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CA3ACu;
    {
        const bool branch_taken_0x1ca3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca3ac) {
            ctx->pc = 0x1CA3E4u;
            goto label_1ca3e4;
        }
    }
    ctx->pc = 0x1CA3B4u;
    // 0x1ca3b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3b8: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1ca3b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ca3bc: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1ca3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x1ca3c0: 0xa46215ec  sh          $v0, 0x15EC($v1)
    ctx->pc = 0x1ca3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ca3c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3c8: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1ca3c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1ca3cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ca3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ca3d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ca3d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ca3d4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA3D4u;
    {
        const bool branch_taken_0x1ca3d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ca3d4) {
            ctx->pc = 0x1CA3E4u;
            goto label_1ca3e4;
        }
    }
    ctx->pc = 0x1CA3DCu;
    // 0x1ca3dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3e0: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1ca3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
label_1ca3e4:
    // 0x1ca3e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ca3e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca3ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CA3ECu;
    SET_GPR_U32(ctx, 31, 0x1CA3F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CA3ECu, 0x1CA3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3F4u;
label_1ca3f4:
    // 0x1ca3f4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3f8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CA3F8u;
    SET_GPR_U32(ctx, 31, 0x1CA400u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CA3F8u, 0x1CA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA400u;
label_1ca400:
    // 0x1ca400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca404: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca408: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ca408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca40c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CA40Cu;
    SET_GPR_U32(ctx, 31, 0x1CA414u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CA40Cu, 0x1CA414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA414u;
label_1ca414:
    // 0x1ca414: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ca414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca418: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CA418u;
    SET_GPR_U32(ctx, 31, 0x1CA420u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CA418u, 0x1CA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA420u;
label_1ca420:
    // 0x1ca420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca424: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ca424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ca428: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1ca428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1ca42c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ca42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ca430: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA430u;
    {
        const bool branch_taken_0x1ca430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca430) {
            ctx->pc = 0x1CA47Cu;
            goto label_1ca47c;
        }
    }
    ctx->pc = 0x1CA438u;
    // 0x1ca438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca43c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca440: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ca440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca444: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1ca444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ca448: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca44c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ca44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca450: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca454: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ca454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca458: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca45c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ca45cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca460: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca464: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ca464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ca468: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ca46c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca470: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ca470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca474: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x1CA474u;
    {
        const bool branch_taken_0x1ca474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca474) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA47Cu;
label_1ca47c:
    // 0x1ca47c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca480: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca484: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca488: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1ca488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1ca48c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA48Cu;
    {
        const bool branch_taken_0x1ca48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca48c) {
            ctx->pc = 0x1CA4ACu;
            goto label_1ca4ac;
        }
    }
    ctx->pc = 0x1CA494u;
    // 0x1ca494: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1ca494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1ca498: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ca498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ca49c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA49Cu;
    {
        const bool branch_taken_0x1ca49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca49c) {
            ctx->pc = 0x1CA4ACu;
            goto label_1ca4ac;
        }
    }
    ctx->pc = 0x1CA4A4u;
    // 0x1ca4a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4a8: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1ca4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
label_1ca4ac:
    // 0x1ca4ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4b0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca4b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca4b8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ca4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ca4bc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA4BCu;
    {
        const bool branch_taken_0x1ca4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4bc) {
            ctx->pc = 0x1CA4ECu;
            goto label_1ca4ec;
        }
    }
    ctx->pc = 0x1CA4C4u;
    // 0x1ca4c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4c8: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ca4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ca4cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA4CCu;
    {
        const bool branch_taken_0x1ca4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4cc) {
            ctx->pc = 0x1CA4ECu;
            goto label_1ca4ec;
        }
    }
    ctx->pc = 0x1CA4D4u;
    // 0x1ca4d4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4d8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1ca4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ca4dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ca4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ca4e0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1ca4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca4e4: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x1CA4E4u;
    {
        const bool branch_taken_0x1ca4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4e4) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA4ECu;
label_1ca4ec:
    // 0x1ca4ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4f0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca4f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca4f8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1ca4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ca4fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA4FCu;
    {
        const bool branch_taken_0x1ca4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4fc) {
            ctx->pc = 0x1CA514u;
            goto label_1ca514;
        }
    }
    ctx->pc = 0x1CA504u;
    // 0x1ca504: 0xc058608  jal         func_161820
    ctx->pc = 0x1CA504u;
    SET_GPR_U32(ctx, 31, 0x1CA50Cu);
    ctx->pc = 0x161820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161820u, 0x1CA504u, 0x1CA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA50Cu;
label_1ca50c:
    // 0x1ca50c: 0xc0586b0  jal         func_161AC0
    ctx->pc = 0x1CA50Cu;
    SET_GPR_U32(ctx, 31, 0x1CA514u);
    ctx->pc = 0x161AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161AC0u, 0x1CA50Cu, 0x1CA514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA514u;
label_1ca514:
    // 0x1ca514: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca518: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca51c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca520: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ca520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ca524: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA524u;
    {
        const bool branch_taken_0x1ca524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca524) {
            ctx->pc = 0x1CA54Cu;
            goto label_1ca54c;
        }
    }
    ctx->pc = 0x1CA52Cu;
    // 0x1ca52c: 0xc0584bc  jal         func_1612F0
    ctx->pc = 0x1CA52Cu;
    SET_GPR_U32(ctx, 31, 0x1CA534u);
    ctx->pc = 0x1612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1612F0u, 0x1CA52Cu, 0x1CA534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA534u;
label_1ca534:
    // 0x1ca534: 0x144000ec  bnez        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x1CA534u;
    {
        const bool branch_taken_0x1ca534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca534) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA53Cu;
    // 0x1ca53c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1CA53Cu;
    SET_GPR_U32(ctx, 31, 0x1CA544u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1CA53Cu, 0x1CA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA544u;
label_1ca544:
    // 0x1ca544: 0x144000e8  bnez        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x1CA544u;
    {
        const bool branch_taken_0x1ca544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca544) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA54Cu;
label_1ca54c:
    // 0x1ca54c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca550: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ca550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ca554: 0x106000e4  beqz        $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1CA554u;
    {
        const bool branch_taken_0x1ca554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca554) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA55Cu;
    // 0x1ca55c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca560: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ca560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ca564: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1ca564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1ca568: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ca568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ca56c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CA56Cu;
    {
        const bool branch_taken_0x1ca56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca56c) {
            ctx->pc = 0x1CA630u;
            goto label_1ca630;
        }
    }
    ctx->pc = 0x1CA574u;
    // 0x1ca574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca578: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca57c: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1ca57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1ca580: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1ca580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca584: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ca584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca588: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca58c: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ca58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1ca590: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca594: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1ca594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca598: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca59c: 0xe4801570  swc1        $f0, 0x1570($a0)
    ctx->pc = 0x1ca59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5488), bits); }
    // 0x1ca5a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5a4: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1ca5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ca5a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5ac: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1ca5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1ca5b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA5B0u;
    {
        const bool branch_taken_0x1ca5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca5b0) {
            ctx->pc = 0x1CA5C8u;
            goto label_1ca5c8;
        }
    }
    ctx->pc = 0x1CA5B8u;
    // 0x1ca5b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5bc: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CA5BCu;
    SET_GPR_U32(ctx, 31, 0x1CA5C4u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CA5BCu, 0x1CA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5C4u;
label_1ca5c4:
    // 0x1ca5c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ca5c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ca5c8:
    // 0x1ca5c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca5cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ca5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca5d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ca5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca5d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ca5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca5e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ca5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca5e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ca5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca5f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca5f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ca5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ca5f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca5fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca600: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1ca600u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca604: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca608: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ca608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca60c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ca60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ca610: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca614: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1ca614u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ca618: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1ca618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca61c: 0xa4c0127c  sh          $zero, 0x127C($a2)
    ctx->pc = 0x1ca61cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ca620: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca624: 0xa0a0156c  sb          $zero, 0x156C($a1)
    ctx->pc = 0x1ca624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca628: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1CA628u;
    {
        const bool branch_taken_0x1ca628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca628) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA630u;
label_1ca630:
    // 0x1ca630: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca634: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca638: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ca638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca63c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca640: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ca640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca644: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca648: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ca648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca64c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca650: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1ca650u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca654: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1ca654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ca658: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca65c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ca65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1ca660: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x1CA660u;
    {
        const bool branch_taken_0x1ca660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca660) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA668u;
label_1ca668:
    // 0x1ca668: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca66c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca670: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca674: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x1ca674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1ca678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca67c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca680: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA680u;
    SET_GPR_U32(ctx, 31, 0x1CA688u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA680u, 0x1CA688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA688u;
label_1ca688:
    // 0x1ca688: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x1ca688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x1ca68c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ca68cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca694: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1ca698: 0x3c0540f0  lui         $a1, 0x40F0
    ctx->pc = 0x1ca698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16624 << 16));
    // 0x1ca69c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ca69cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca6a0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1ca6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6a4: 0xe4c01280  swc1        $f0, 0x1280($a2)
    ctx->pc = 0x1ca6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4736), bits); }
    // 0x1ca6a8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1ca6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6ac: 0x24e80180  addiu       $t0, $a3, 0x180
    ctx->pc = 0x1ca6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
    // 0x1ca6b0: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1ca6b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1ca6b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CA6B4u;
    SET_GPR_U32(ctx, 31, 0x1CA6BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CA6B4u, 0x1CA6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6BCu;
label_1ca6bc:
    // 0x1ca6bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6c0: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1ca6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ca6c4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1ca6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca6c8: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1ca6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
label_1ca6cc:
    // 0x1ca6cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca6d0: 0x8c261a98  lw          $a2, 0x1A98($at)
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ca6d4: 0x30c70200  andi        $a3, $a2, 0x200
    ctx->pc = 0x1ca6d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x1ca6d8: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA6D8u;
    {
        const bool branch_taken_0x1ca6d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca6d8) {
            ctx->pc = 0x1CA6ECu;
            goto label_1ca6ec;
        }
    }
    ctx->pc = 0x1CA6E0u;
    // 0x1ca6e0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1ca6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca6e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6e8: 0xa04813a7  sb          $t0, 0x13A7($v0)
    ctx->pc = 0x1ca6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5031), (uint8_t)GPR_U32(ctx, 8));
label_1ca6ec:
    // 0x1ca6ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca6f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ca6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca6f4: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1ca6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1ca6f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ca6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ca6fc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ca6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ca700: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca704: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ca704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ca708: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1ca708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1ca70c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1ca70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ca710: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1ca710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ca714: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1ca714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1ca718: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca71c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ca71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca720: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ca720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1ca724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ca724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ca728: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ca728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1ca72c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca730: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ca730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ca734: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ca734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca738: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ca738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1ca73c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA73Cu;
    {
        const bool branch_taken_0x1ca73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca73c) {
            ctx->pc = 0x1CA75Cu;
            goto label_1ca75c;
        }
    }
    ctx->pc = 0x1CA744u;
    // 0x1ca744: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca748: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1ca748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ca74c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ca74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ca750: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ca750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ca754: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca758: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1ca758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_1ca75c:
    // 0x1ca75c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ca75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca760: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca764: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1ca764u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca768: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca76c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ca76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca770: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CA770u;
    SET_GPR_U32(ctx, 31, 0x1CA778u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CA770u, 0x1CA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA778u;
label_1ca778:
    // 0x1ca778: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca77c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CA77Cu;
    SET_GPR_U32(ctx, 31, 0x1CA784u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CA77Cu, 0x1CA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA784u;
label_1ca784:
    // 0x1ca784: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca788: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca78c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ca78cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca790: 0xc057480  jal         func_15D200
    ctx->pc = 0x1CA790u;
    SET_GPR_U32(ctx, 31, 0x1CA798u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1CA790u, 0x1CA798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA798u;
label_1ca798:
    // 0x1ca798: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ca798u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ca79c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca7a0: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1ca7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ca7a4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ca7a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ca7a8: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1CA7A8u;
    SET_GPR_U32(ctx, 31, 0x1CA7B0u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1CA7A8u, 0x1CA7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7B0u;
label_1ca7b0:
    // 0x1ca7b0: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1ca7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1ca7b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ca7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ca7b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca7bc: 0x0  nop
    ctx->pc = 0x1ca7bcu;
    // NOP
    // 0x1ca7c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ca7c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ca7c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ca7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1ca7c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca7cc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1ca7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca7d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca7d4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1ca7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca7d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ca7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ca7dc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1ca7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1ca7e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca7e4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1ca7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca7e8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ca7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca7ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca7f0: 0x0  nop
    ctx->pc = 0x1ca7f0u;
    // NOP
    // 0x1ca7f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA7F4u;
    {
        const bool branch_taken_0x1ca7f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca7f4) {
            ctx->pc = 0x1CA808u;
            goto label_1ca808;
        }
    }
    ctx->pc = 0x1CA7FCu;
    // 0x1ca7fc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ca7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca800: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca804: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1ca804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1ca808:
    // 0x1ca808: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca80c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1ca80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca810: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca814: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca818: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ca818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ca81c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1ca820: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ca820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca824: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CA824u;
    SET_GPR_U32(ctx, 31, 0x1CA82Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CA824u, 0x1CA82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA82Cu;
label_1ca82c:
    // 0x1ca82c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca830: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca834: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca838: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ca838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ca83c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA83Cu;
    {
        const bool branch_taken_0x1ca83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca83c) {
            ctx->pc = 0x1CA88Cu;
            goto label_1ca88c;
        }
    }
    ctx->pc = 0x1CA844u;
    // 0x1ca844: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca848: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ca848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ca84c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca850: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1CA850u;
    SET_GPR_U32(ctx, 31, 0x1CA858u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1CA850u, 0x1CA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA858u;
label_1ca858:
    // 0x1ca858: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1ca858u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ca85c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA85Cu;
    {
        const bool branch_taken_0x1ca85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca85c) {
            ctx->pc = 0x1CA88Cu;
            goto label_1ca88c;
        }
    }
    ctx->pc = 0x1CA864u;
    // 0x1ca864: 0x32430008  andi        $v1, $s2, 0x8
    ctx->pc = 0x1ca864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x1ca868: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA868u;
    {
        const bool branch_taken_0x1ca868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca868) {
            ctx->pc = 0x1CA884u;
            goto label_1ca884;
        }
    }
    ctx->pc = 0x1CA870u;
    // 0x1ca870: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ca870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca874: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ca874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ca878: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1ca878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1ca87c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ca87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ca880: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ca880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1ca884:
    // 0x1ca884: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CA884u;
    {
        const bool branch_taken_0x1ca884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca884) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA88Cu;
label_1ca88c:
    // 0x1ca88c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca890: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ca890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ca894: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CA894u;
    {
        const bool branch_taken_0x1ca894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca894) {
            ctx->pc = 0x1CA8E8u;
            goto label_1ca8e8;
        }
    }
    ctx->pc = 0x1CA89Cu;
    // 0x1ca89c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca8a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ca8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca8a8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1ca8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ca8ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8b0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ca8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca8b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8b8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ca8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca8bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ca8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca8c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ca8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ca8cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca8d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8d4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1ca8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1ca8d8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1ca8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1ca8dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca8e0: 0x8fb10058  lw          $s1, 0x58($sp)
    ctx->pc = 0x1ca8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca8e4: 0xe6201280  swc1        $f0, 0x1280($s1)
    ctx->pc = 0x1ca8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4736), bits); }
label_1ca8e8:
    // 0x1ca8e8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1ca8e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca8ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca8f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca8f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca8f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ca8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA904u;
}
