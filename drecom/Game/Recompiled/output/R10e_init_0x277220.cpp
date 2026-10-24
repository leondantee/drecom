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

// Function: R10e_init
// Address: 0x277220 - 0x277430
void R10e_init_0x277220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10e_init_0x277220");
#endif

    switch (ctx->pc) {
        case 0x277240u: goto label_277240;
        case 0x277340u: goto label_277340;
        case 0x2773acu: goto label_2773ac;
        case 0x2773b4u: goto label_2773b4;
        case 0x2773c4u: goto label_2773c4;
        case 0x277418u: goto label_277418;
        default: break;
    }

    ctx->pc = 0x277220u;

    // 0x277220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x277220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x277224: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x277224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x277228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27722c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x277230: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x277230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277234: 0x2444da50  addiu       $a0, $v0, -0x25B0
    ctx->pc = 0x277234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957648));
    // 0x277238: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x277238u;
    SET_GPR_U32(ctx, 31, 0x277240u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x277238u, 0x277240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277240u;
label_277240:
    // 0x277240: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277244: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x277244u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x277248: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x277248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x27724c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27724cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x277250: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x277250u;
    {
        const bool branch_taken_0x277250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277250) {
            ctx->pc = 0x2772A0u;
            goto label_2772a0;
        }
    }
    ctx->pc = 0x277258u;
    // 0x277258: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x277258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x27725c: 0x244274e0  addiu       $v0, $v0, 0x74E0
    ctx->pc = 0x27725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29920));
    // 0x277260: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277264: 0xac22d91c  sw          $v0, -0x26E4($at)
    ctx->pc = 0x277264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD91Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD91Cu, _value); } while (0);
    // 0x277268: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x277268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27726c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27726cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277270: 0xac22d918  sw          $v0, -0x26E8($at)
    ctx->pc = 0x277270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD918u, _value); } while (0);
    // 0x277274: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x277274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x277278: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27727c: 0xa022d911  sb          $v0, -0x26EF($at)
    ctx->pc = 0x27727cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x277280: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x277280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x277284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277288: 0xa022d913  sb          $v0, -0x26ED($at)
    ctx->pc = 0x277288u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD913u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD913u, _value); } while (0);
    // 0x27728c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277294: 0xa022d4b1  sb          $v0, -0x2B4F($at)
    ctx->pc = 0x277294u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x277298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x277298u;
    {
        const bool branch_taken_0x277298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277298) {
            ctx->pc = 0x2772ACu;
            goto label_2772ac;
        }
    }
    ctx->pc = 0x2772A0u;
label_2772a0:
    // 0x2772a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2772a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2772a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2772a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2772a8: 0xa022d911  sb          $v0, -0x26EF($at)
    ctx->pc = 0x2772a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
label_2772ac:
    // 0x2772ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2772acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2772b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2772b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2772b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2772b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2772b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2772b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2772bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2772bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2772c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2772c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2772c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2772c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2772c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2772c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2772cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2772ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2772d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2772d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2772d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2772d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2772d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2772d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2772dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2772dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2772e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2772e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2772e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2772e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2772e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2772e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2772ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2772ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2772f0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2772f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2772f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2772f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2772f8: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x2772f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x2772fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2772fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x277300: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x277300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x277304: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x277304u;
    {
        const bool branch_taken_0x277304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277304) {
            ctx->pc = 0x277360u;
            goto label_277360;
        }
    }
    ctx->pc = 0x27730Cu;
    // 0x27730c: 0x2a210080  slti        $at, $s1, 0x80
    ctx->pc = 0x27730cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x277310: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x277310u;
    {
        const bool branch_taken_0x277310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x277310) {
            ctx->pc = 0x277324u;
            goto label_277324;
        }
    }
    ctx->pc = 0x277318u;
    // 0x277318: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x277318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27731c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27731Cu;
    {
        const bool branch_taken_0x27731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27731c) {
            ctx->pc = 0x277328u;
            goto label_277328;
        }
    }
    ctx->pc = 0x277324u;
label_277324:
    // 0x277324: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x277324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_277328:
    // 0x277328: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x277328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x27732c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27732cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277330: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x277330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x277334: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x277334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277338: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x277338u;
    SET_GPR_U32(ctx, 31, 0x277340u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x277338u, 0x277340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277340u;
label_277340:
    // 0x277340: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x277340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x277344: 0x8c22bb54  lw          $v0, -0x44AC($at)
    ctx->pc = 0x277344u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB54u));
    // 0x277348: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x277348u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x27734c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x27734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x277350: 0x8c22bb58  lw          $v0, -0x44A8($at)
    ctx->pc = 0x277350u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB58u));
    // 0x277354: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x277354u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x277358: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x277358u;
    {
        const bool branch_taken_0x277358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277358) {
            ctx->pc = 0x2773ACu;
            goto label_2773ac;
        }
    }
    ctx->pc = 0x277360u;
label_277360:
    // 0x277360: 0x2a210050  slti        $at, $s1, 0x50
    ctx->pc = 0x277360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x277364: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x277364u;
    {
        const bool branch_taken_0x277364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x277364) {
            ctx->pc = 0x277378u;
            goto label_277378;
        }
    }
    ctx->pc = 0x27736Cu;
    // 0x27736c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27736cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x277370u;
    {
        const bool branch_taken_0x277370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277370) {
            ctx->pc = 0x277394u;
            goto label_277394;
        }
    }
    ctx->pc = 0x277378u;
label_277378:
    // 0x277378: 0x2a2100a0  slti        $at, $s1, 0xA0
    ctx->pc = 0x277378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)160) ? 1 : 0);
    // 0x27737c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27737Cu;
    {
        const bool branch_taken_0x27737c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27737c) {
            ctx->pc = 0x277390u;
            goto label_277390;
        }
    }
    ctx->pc = 0x277384u;
    // 0x277384: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x277384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x277388u;
    {
        const bool branch_taken_0x277388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277388) {
            ctx->pc = 0x277394u;
            goto label_277394;
        }
    }
    ctx->pc = 0x277390u;
label_277390:
    // 0x277390: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x277390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_277394:
    // 0x277394: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x277394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x277398: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x277398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27739c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x27739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x2773a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2773a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2773a4: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x2773A4u;
    SET_GPR_U32(ctx, 31, 0x2773ACu);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x2773A4u, 0x2773ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773ACu;
label_2773ac:
    // 0x2773ac: 0xc09dd10  jal         func_277440
    ctx->pc = 0x2773ACu;
    SET_GPR_U32(ctx, 31, 0x2773B4u);
    ctx->pc = 0x277440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277440u, 0x2773ACu, 0x2773B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773B4u;
label_2773b4:
    // 0x2773b4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2773b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2773b8: 0x2444d330  addiu       $a0, $v0, -0x2CD0
    ctx->pc = 0x2773b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x2773bc: 0xc0a1048  jal         func_284120
    ctx->pc = 0x2773BCu;
    SET_GPR_U32(ctx, 31, 0x2773C4u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x2773BCu, 0x2773C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773C4u;
label_2773c4:
    // 0x2773c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2773c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2773c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773cc: 0xa022d411  sb          $v0, -0x2BEF($at)
    ctx->pc = 0x2773ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD411u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD411u, _value); } while (0);
    // 0x2773d0: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x2773d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x2773d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773d8: 0xa022d413  sb          $v0, -0x2BED($at)
    ctx->pc = 0x2773d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD413u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD413u, _value); } while (0);
    // 0x2773dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2773dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2773e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773e4: 0xa422d418  sh          $v0, -0x2BE8($at)
    ctx->pc = 0x2773e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD418u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD418u, _value); } while (0);
    // 0x2773e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773ec: 0xa420d41a  sh          $zero, -0x2BE6($at)
    ctx->pc = 0x2773ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Au, _value); } while (0);
    // 0x2773f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2773f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2773f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2773f8: 0xa422d41c  sh          $v0, -0x2BE4($at)
    ctx->pc = 0x2773f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD41Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Cu, _value); } while (0);
    // 0x2773fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2773fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277400: 0xa420d41e  sh          $zero, -0x2BE2($at)
    ctx->pc = 0x277400u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Eu, _value); } while (0);
    // 0x277404: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x277404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x277408: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x277408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x27740c: 0x24457520  addiu       $a1, $v0, 0x7520
    ctx->pc = 0x27740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29984));
    // 0x277410: 0xc0848cc  jal         func_212330
    ctx->pc = 0x277410u;
    SET_GPR_U32(ctx, 31, 0x277418u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x277410u, 0x277418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277418u;
label_277418:
    // 0x277418: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x277418u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27741c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27741cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277424: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x277424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x277428: 0x3e00008  jr          $ra
    ctx->pc = 0x277428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277430u;
}
