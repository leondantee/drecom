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

// Function: Em0b_R1_mv14
// Address: 0x1f4360 - 0x1f4b2c
void Em0b_R1_mv14_0x1f4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv14_0x1f4360");
#endif

    switch (ctx->pc) {
        case 0x1f43c0u: goto label_1f43c0;
        case 0x1f444cu: goto label_1f444c;
        case 0x1f46bcu: goto label_1f46bc;
        case 0x1f46dcu: goto label_1f46dc;
        case 0x1f473cu: goto label_1f473c;
        case 0x1f4754u: goto label_1f4754;
        case 0x1f4784u: goto label_1f4784;
        case 0x1f47a4u: goto label_1f47a4;
        case 0x1f4844u: goto label_1f4844;
        case 0x1f488cu: goto label_1f488c;
        case 0x1f4898u: goto label_1f4898;
        case 0x1f4900u: goto label_1f4900;
        case 0x1f493cu: goto label_1f493c;
        case 0x1f4954u: goto label_1f4954;
        case 0x1f496cu: goto label_1f496c;
        case 0x1f4a34u: goto label_1f4a34;
        case 0x1f4a5cu: goto label_1f4a5c;
        default: break;
    }

    ctx->pc = 0x1f4360u;

    // 0x1f4360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4364: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1f4364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1f4368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f436c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f436cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4370: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1f4370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1f4374: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4378: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f4378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f437c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f437cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f4380: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f4380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4384: 0x1083017f  beq         $a0, $v1, . + 4 + (0x17F << 2)
    ctx->pc = 0x1F4384u;
    {
        const bool branch_taken_0x1f4384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f4384) {
            ctx->pc = 0x1F4984u;
            goto label_1f4984;
        }
    }
    ctx->pc = 0x1F438Cu;
    // 0x1f438c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1f438cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4390: 0x10900049  beq         $a0, $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1F4390u;
    {
        const bool branch_taken_0x1f4390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x1f4390) {
            ctx->pc = 0x1F44B8u;
            goto label_1f44b8;
        }
    }
    ctx->pc = 0x1F4398u;
    // 0x1f4398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f439c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F439Cu;
    {
        const bool branch_taken_0x1f439c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f439c) {
            ctx->pc = 0x1F4410u;
            goto label_1f4410;
        }
    }
    ctx->pc = 0x1F43A4u;
    // 0x1f43a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F43A4u;
    {
        const bool branch_taken_0x1f43a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f43a4) {
            ctx->pc = 0x1F43B4u;
            goto label_1f43b4;
        }
    }
    ctx->pc = 0x1F43ACu;
    // 0x1f43ac: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x1F43ACu;
    {
        const bool branch_taken_0x1f43ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f43ac) {
            ctx->pc = 0x1F4B14u;
            goto label_1f4b14;
        }
    }
    ctx->pc = 0x1F43B4u;
label_1f43b4:
    // 0x1f43b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43b8: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x1F43B8u;
    SET_GPR_U32(ctx, 31, 0x1F43C0u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x1F43B8u, 0x1F43C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43C0u;
label_1f43c0:
    // 0x1f43c0: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1f43c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f43c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43c8: 0xa07010a8  sb          $s0, 0x10A8($v1)
    ctx->pc = 0x1f43c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 16));
    // 0x1f43cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f43d4: 0x34700004  ori         $s0, $v1, 0x4
    ctx->pc = 0x1f43d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1f43d8: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x1f43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x1f43dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f43dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f43e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f43e4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f43e8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1f43e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f43ec: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1f43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1f43f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43f4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f43f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f43f8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f43f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f43fc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1f43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1f4400: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1f4400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f4404: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f4404u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f4408: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1F4408u;
    {
        const bool branch_taken_0x1f4408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4408) {
            ctx->pc = 0x1F4B14u;
            goto label_1f4b14;
        }
    }
    ctx->pc = 0x1F4410u;
label_1f4410:
    // 0x1f4410: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4418: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f4418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f441c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4420: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4424: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1f4424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4428: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1f4428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1f442c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4430: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4434: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f4434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f4438: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1f4438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1f443c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f443cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4440: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f4440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f4444: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F4444u;
    SET_GPR_U32(ctx, 31, 0x1F444Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F4444u, 0x1F444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F444Cu;
label_1f444c:
    // 0x1f444c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f444cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f4450: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4454: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x1f4454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f4458: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f4458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f445c: 0x34632018  ori         $v1, $v1, 0x2018
    ctx->pc = 0x1f445cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8216);
    // 0x1f4460: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1f4460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x1f4464: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f4464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f4468: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f446c: 0xa4851278  sh          $a1, 0x1278($a0)
    ctx->pc = 0x1f446cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f4470: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4474: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1f4474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f4478: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1f4478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f447c: 0x30a34000  andi        $v1, $a1, 0x4000
    ctx->pc = 0x1f447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x1f4480: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4480u;
    {
        const bool branch_taken_0x1f4480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4480) {
            ctx->pc = 0x1F4494u;
            goto label_1f4494;
        }
    }
    ctx->pc = 0x1F4488u;
    // 0x1f4488: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f4488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f448c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4490: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f4490u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1f4494:
    // 0x1f4494: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4498: 0xa4a0127a  sh          $zero, 0x127A($a1)
    ctx->pc = 0x1f4498u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f449c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f449cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44a0: 0xa480127e  sh          $zero, 0x127E($a0)
    ctx->pc = 0x1f44a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f44a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f44a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f44a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f44ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f44acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f44b4: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f44b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1f44b8:
    // 0x1f44b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f44b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44bc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1f44bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x1f44c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f44c4: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1f44c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f44c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44cc: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x1f44ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1f44d0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1f44d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1f44d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f44d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f44d8: 0x286100a1  slti        $at, $v1, 0xA1
    ctx->pc = 0x1f44d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)161) ? 1 : 0);
    // 0x1f44dc: 0x14200064  bnez        $at, . + 4 + (0x64 << 2)
    ctx->pc = 0x1F44DCu;
    {
        const bool branch_taken_0x1f44dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f44dc) {
            ctx->pc = 0x1F4670u;
            goto label_1f4670;
        }
    }
    ctx->pc = 0x1F44E4u;
    // 0x1f44e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44e8: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1f44e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x1f44ec: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1f44ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f44f0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f44f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f44f4: 0x28a1012c  slti        $at, $a1, 0x12C
    ctx->pc = 0x1f44f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1f44f8: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x1F44F8u;
    {
        const bool branch_taken_0x1f44f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f44f8) {
            ctx->pc = 0x1F4670u;
            goto label_1f4670;
        }
    }
    ctx->pc = 0x1F4500u;
    // 0x1f4500: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f4504: 0x8c240a90  lw          $a0, 0xA90($at)
    ctx->pc = 0x1f4504u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x600A90u));
    // 0x1f4508: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1f4508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1f450c: 0x34430011  ori         $v1, $v0, 0x11
    ctx->pc = 0x1f450cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x1f4510: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F4510u;
    {
        const bool branch_taken_0x1f4510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f4510) {
            ctx->pc = 0x1F4578u;
            goto label_1f4578;
        }
    }
    ctx->pc = 0x1F4518u;
    // 0x1f4518: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f451c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4520: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f4524: 0x8c220a90  lw          $v0, 0xA90($at)
    ctx->pc = 0x1f4524u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A90u));
    // 0x1f4528: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x1f4528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f452c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4530: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f4530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f4534: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x1f4534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x1f4538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f453c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4540: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f4544: 0x8c220a90  lw          $v0, 0xA90($at)
    ctx->pc = 0x1f4544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A90u));
    // 0x1f4548: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x1f4548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f454c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4550: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f4550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f4554: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x1f4554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x1f4558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f455c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4560: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f4564: 0x8c220a90  lw          $v0, 0xA90($at)
    ctx->pc = 0x1f4564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A90u));
    // 0x1f4568: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f4568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f456c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4570: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f4570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f4574: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f4574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
label_1f4578:
    // 0x1f4578: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f457c: 0x8c230a94  lw          $v1, 0xA94($at)
    ctx->pc = 0x1f457cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600A94u));
    // 0x1f4580: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1f4580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1f4584: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x1f4584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x1f4588: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F4588u;
    {
        const bool branch_taken_0x1f4588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f4588) {
            ctx->pc = 0x1F4614u;
            goto label_1f4614;
        }
    }
    ctx->pc = 0x1F4590u;
    // 0x1f4590: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4594: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f4594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4598: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f459c: 0x8c220a94  lw          $v0, 0xA94($at)
    ctx->pc = 0x1f459cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A94u));
    // 0x1f45a0: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x1f45a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f45a4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f45a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f45a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f45a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f45ac: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x1f45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x1f45b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f45b4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f45b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f45b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f45bc: 0x8c220a94  lw          $v0, 0xA94($at)
    ctx->pc = 0x1f45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A94u));
    // 0x1f45c0: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x1f45c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f45c4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f45c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f45c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f45c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f45cc: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x1f45ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x1f45d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f45d4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f45d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f45d8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f45d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f45dc: 0x8c220a94  lw          $v0, 0xA94($at)
    ctx->pc = 0x1f45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A94u));
    // 0x1f45e0: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f45e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f45e4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f45e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f45e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f45e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f45ec: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f45ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f45f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f45f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f45f8: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f45f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f45fc: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x1f45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x1f4600: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1f4600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1f4604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4608: 0x0  nop
    ctx->pc = 0x1f4608u;
    // NOP
    // 0x1f460c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f460cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f4610: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f4610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1f4614:
    // 0x1f4614: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4618: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f4618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f461c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4620: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f4620u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f4624: 0x2841010f  slti        $at, $v0, 0x10F
    ctx->pc = 0x1f4624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)271) ? 1 : 0);
    // 0x1f4628: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F4628u;
    {
        const bool branch_taken_0x1f4628 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4628) {
            ctx->pc = 0x1F4670u;
            goto label_1f4670;
        }
    }
    ctx->pc = 0x1F4630u;
    // 0x1f4630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4634: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f4634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f4638: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f463c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f463cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f4640: 0x28410118  slti        $at, $v0, 0x118
    ctx->pc = 0x1f4640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)280) ? 1 : 0);
    // 0x1f4644: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1F4644u;
    {
        const bool branch_taken_0x1f4644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4644) {
            ctx->pc = 0x1F4670u;
            goto label_1f4670;
        }
    }
    ctx->pc = 0x1F464Cu;
    // 0x1f464c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4650: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f4650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4654: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f4654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4658: 0x3c023e61  lui         $v0, 0x3E61
    ctx->pc = 0x1f4658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15969 << 16));
    // 0x1f465c: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x1f465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x1f4660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f4660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4664: 0x0  nop
    ctx->pc = 0x1f4664u;
    // NOP
    // 0x1f4668: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f4668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f466c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1f4670:
    // 0x1f4670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4674: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f4674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f4678: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f467c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f467cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f4680: 0x284100dd  slti        $at, $v0, 0xDD
    ctx->pc = 0x1f4680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)221) ? 1 : 0);
    // 0x1f4684: 0x1420007d  bnez        $at, . + 4 + (0x7D << 2)
    ctx->pc = 0x1F4684u;
    {
        const bool branch_taken_0x1f4684 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4684) {
            ctx->pc = 0x1F487Cu;
            goto label_1f487c;
        }
    }
    ctx->pc = 0x1F468Cu;
    // 0x1f468c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4690: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f4690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f4694: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f4694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4698: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f4698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f469c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F469Cu;
    {
        const bool branch_taken_0x1f469c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f469c) {
            ctx->pc = 0x1F476Cu;
            goto label_1f476c;
        }
    }
    ctx->pc = 0x1F46A4u;
    // 0x1f46a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f46a8: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f46a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f46ac: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f46acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f46b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f46b4: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f46b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f46b8: 0x0  nop
    ctx->pc = 0x1f46b8u;
    // NOP
label_1f46bc:
    // 0x1f46bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f46c0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f46c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f46c4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f46c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f46c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f46c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f46cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f46ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f46d0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f46d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f46d4: 0xc096254  jal         func_258950
    ctx->pc = 0x1F46D4u;
    SET_GPR_U32(ctx, 31, 0x1F46DCu);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F46D4u, 0x1F46DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F46DCu;
label_1f46dc:
    // 0x1f46dc: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f46dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f46e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f46e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f46e4: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F46E4u;
    {
        const bool branch_taken_0x1f46e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f46e4) {
            ctx->pc = 0x1F46BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f46bc;
        }
    }
    ctx->pc = 0x1F46ECu;
    // 0x1f46ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f46f0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f46f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f46f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1f46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f46f8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f46f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f46fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4700: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f4700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f4704: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4708: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f4708u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f470c: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x1f470cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f4710: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F4710u;
    {
        const bool branch_taken_0x1f4710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4710) {
            ctx->pc = 0x1F487Cu;
            goto label_1f487c;
        }
    }
    ctx->pc = 0x1F4718u;
    // 0x1f4718: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f4718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f471c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4720: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4720u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4724: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4728: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f4728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f472c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f472cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4730: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4734: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f4734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f4738: 0x0  nop
    ctx->pc = 0x1f4738u;
    // NOP
label_1f473c:
    // 0x1f473c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f473cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f4740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4744: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f4744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f4748: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f4748u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f474c: 0xc0961d0  jal         func_258740
    ctx->pc = 0x1F474Cu;
    SET_GPR_U32(ctx, 31, 0x1F4754u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x1F474Cu, 0x1F4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4754u;
label_1f4754:
    // 0x1f4754: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f4754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f4758: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f4758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f475c: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F475Cu;
    {
        const bool branch_taken_0x1f475c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f475c) {
            ctx->pc = 0x1F473Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f473c;
        }
    }
    ctx->pc = 0x1F4764u;
    // 0x1f4764: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F4764u;
    {
        const bool branch_taken_0x1f4764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4764) {
            ctx->pc = 0x1F487Cu;
            goto label_1f487c;
        }
    }
    ctx->pc = 0x1F476Cu;
label_1f476c:
    // 0x1f476c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4770: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f4770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f4774: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f4774u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4778: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f477c: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f477cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f4780: 0x0  nop
    ctx->pc = 0x1f4780u;
    // NOP
label_1f4784:
    // 0x1f4784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4788: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f4788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f478c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f478cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4790: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f4790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4794: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f4794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f4798: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f4798u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f479c: 0xc096254  jal         func_258950
    ctx->pc = 0x1F479Cu;
    SET_GPR_U32(ctx, 31, 0x1F47A4u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F479Cu, 0x1F47A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47A4u;
label_1f47a4:
    // 0x1f47a4: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f47a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f47a8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f47a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f47ac: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F47ACu;
    {
        const bool branch_taken_0x1f47ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f47ac) {
            ctx->pc = 0x1F4784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4784;
        }
    }
    ctx->pc = 0x1F47B4u;
    // 0x1f47b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f47b8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f47b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f47bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f47bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f47c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f47c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f47c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F47C4u;
    {
        const bool branch_taken_0x1f47c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f47c4) {
            ctx->pc = 0x1F47E4u;
            goto label_1f47e4;
        }
    }
    ctx->pc = 0x1F47CCu;
    // 0x1f47cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f47d0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f47d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f47d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f47d8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f47d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f47dc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F47DCu;
    {
        const bool branch_taken_0x1f47dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f47dc) {
            ctx->pc = 0x1F487Cu;
            goto label_1f487c;
        }
    }
    ctx->pc = 0x1F47E4u;
label_1f47e4:
    // 0x1f47e4: 0x3c02c743  lui         $v0, 0xC743
    ctx->pc = 0x1f47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51011 << 16));
    // 0x1f47e8: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1f47e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x1f47ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f47ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f47f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f47f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1f47f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1f47f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f47fc: 0x8462127e  lh          $v0, 0x127E($v1)
    ctx->pc = 0x1f47fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f4800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4804: 0xa462127e  sh          $v0, 0x127E($v1)
    ctx->pc = 0x1f4804u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f480c: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1f480cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1f4810: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f4810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4814: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f4814u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f4818: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f4818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f481c: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F481Cu;
    {
        const bool branch_taken_0x1f481c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f481c) {
            ctx->pc = 0x1F487Cu;
            goto label_1f487c;
        }
    }
    ctx->pc = 0x1F4824u;
    // 0x1f4824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f482c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f482cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f4830: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1f4830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f4834: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f4834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4838: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f4838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f483c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F483Cu;
    SET_GPR_U32(ctx, 31, 0x1F4844u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F483Cu, 0x1F4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4844u;
label_1f4844:
    // 0x1f4844: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f4844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4848: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f484c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f484cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4850: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1f4850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f4854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4858: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f4858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f485c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4860: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f4860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4864: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4868: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f4868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f486c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4870: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f4870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f4874: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1F4874u;
    {
        const bool branch_taken_0x1f4874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4874) {
            ctx->pc = 0x1F4B14u;
            goto label_1f4b14;
        }
    }
    ctx->pc = 0x1F487Cu;
label_1f487c:
    // 0x1f487c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f487cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4880: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f4880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4884: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F4884u;
    SET_GPR_U32(ctx, 31, 0x1F488Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F4884u, 0x1F488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F488Cu;
label_1f488c:
    // 0x1f488c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4890: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F4890u;
    SET_GPR_U32(ctx, 31, 0x1F4898u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F4890u, 0x1F4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4898u;
label_1f4898:
    // 0x1f4898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f489c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f489cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f48a0: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x1F48A0u;
    {
        const bool branch_taken_0x1f48a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f48a0) {
            ctx->pc = 0x1F4B14u;
            goto label_1f4b14;
        }
    }
    ctx->pc = 0x1F48A8u;
    // 0x1f48a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f48a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f48ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f48acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48b0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f48b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f48b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48b8: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1f48b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f48bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1f48bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f48c0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1f48c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1f48c4: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x1F48C4u;
    {
        const bool branch_taken_0x1f48c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f48c4) {
            ctx->pc = 0x1F4B14u;
            goto label_1f4b14;
        }
    }
    ctx->pc = 0x1F48CCu;
    // 0x1f48cc: 0x3c02c743  lui         $v0, 0xC743
    ctx->pc = 0x1f48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51011 << 16));
    // 0x1f48d0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1f48d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x1f48d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f48d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f48d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48dc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1f48dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1f48e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f48e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f48e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f48ec: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1f48ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f48f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f48f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f48f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f48f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f48f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F48F8u;
    SET_GPR_U32(ctx, 31, 0x1F4900u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F48F8u, 0x1F4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4900u;
label_1f4900:
    // 0x1f4900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4908: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f4908u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f490c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1f490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f4910: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4914: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f4914u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f4918: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f491c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f491cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4920: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4924: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f4924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4928: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f492c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f492cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f4930: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4934: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F4934u;
    SET_GPR_U32(ctx, 31, 0x1F493Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F4934u, 0x1F493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F493Cu;
label_1f493c:
    // 0x1f493c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4940: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f4940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f4944: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f4944u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4948: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f494c: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f494cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f4950: 0x0  nop
    ctx->pc = 0x1f4950u;
    // NOP
label_1f4954:
    // 0x1f4954: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f4954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4958: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f4958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f495c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f495cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f4960: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f4960u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f4964: 0xc096254  jal         func_258950
    ctx->pc = 0x1F4964u;
    SET_GPR_U32(ctx, 31, 0x1F496Cu);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F4964u, 0x1F496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F496Cu;
label_1f496c:
    // 0x1f496c: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f496cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f4970: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f4970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f4974: 0x1620fff7  bnez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F4974u;
    {
        const bool branch_taken_0x1f4974 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4974) {
            ctx->pc = 0x1F4954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4954;
        }
    }
    ctx->pc = 0x1F497Cu;
    // 0x1f497c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1F497Cu;
    {
        const bool branch_taken_0x1f497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f497c) {
            ctx->pc = 0x1F4B14u;
            goto label_1f4b14;
        }
    }
    ctx->pc = 0x1F4984u;
label_1f4984:
    // 0x1f4984: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4988: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f4988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f498c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f4990: 0x2402dfe7  addiu       $v0, $zero, -0x2019
    ctx->pc = 0x1f4990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f4994: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f4994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f4998: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f4998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f499c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f499cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f49a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49a4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f49a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1f49a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f49a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f49ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f49acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49b0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f49b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f49b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f49b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f49b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49bc: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f49bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f49c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f49c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49c4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1f49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1f49c8: 0x24700480  addiu       $s0, $v1, 0x480
    ctx->pc = 0x1f49c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1f49cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f49d0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1f49d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f49d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f49d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49d8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1f49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1f49dc: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x1f49dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x1f49e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f49e4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1f49e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f49e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f49e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f49ec: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1f49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1f49f0: 0x247005a0  addiu       $s0, $v1, 0x5A0
    ctx->pc = 0x1f49f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1440));
    // 0x1f49f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f49f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f49f8: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x1f49f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f49fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4a00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f4a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4a08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f4a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4a0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a10: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f4a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4a14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a18: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1f4a18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4a1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a20: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1f4a20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4a24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f4a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f4a2c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F4A34u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4A2Cu, 0x1F4A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A34u;
label_1f4a34:
    // 0x1f4a34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f4a34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f4a38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f4a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f4a3c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x1f4a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f4a40: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1f4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f4a44: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1f4a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1f4a48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f4a48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f4a4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a50: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f4a50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4a54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F4A54u;
    SET_GPR_U32(ctx, 31, 0x1F4A5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F4A54u, 0x1F4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A5Cu;
label_1f4a5c:
    // 0x1f4a5c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1f4a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4a60: 0x3085003f  andi        $a1, $a0, 0x3F
    ctx->pc = 0x1f4a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1f4a64: 0x24a600b4  addiu       $a2, $a1, 0xB4
    ctx->pc = 0x1f4a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 180));
    // 0x1f4a68: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x1f4a68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1f4a6c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1f4a6cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1f4a70: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1f4a70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a74: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x1f4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1f4a78: 0xa467005c  sh          $a3, 0x5C($v1)
    ctx->pc = 0x1f4a78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 7));
    // 0x1f4a7c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a80: 0x94a4000e  lhu         $a0, 0xE($a1)
    ctx->pc = 0x1f4a80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x1f4a84: 0x3083f8ff  andi        $v1, $a0, 0xF8FF
    ctx->pc = 0x1f4a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63743);
    // 0x1f4a88: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x1f4a88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4a8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a90: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f4a90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4a94: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4a98: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f4a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4a9c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1f4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f4aa0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4aa4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f4aa8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4aac: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1f4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4ab0: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x1f4ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f4ab4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1f4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1f4ab8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4abc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f4abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f4ac0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f4ac4: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x1f4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x1f4ac8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f4ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f4acc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f4accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f4ad0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f4ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4ad8: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x1f4ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f4adc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1f4adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1f4ae0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1f4ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1f4ae4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F4AE4u;
    {
        const bool branch_taken_0x1f4ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4ae4) {
            ctx->pc = 0x1F4B14u;
            goto label_1f4b14;
        }
    }
    ctx->pc = 0x1F4AECu;
    // 0x1f4aec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f4aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4af0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4af4: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1f4af4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f4af8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f4afc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4b00: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1f4b00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4b04: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4b08: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f4b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f4b0c: 0x34830004  ori         $v1, $a0, 0x4
    ctx->pc = 0x1f4b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1f4b10: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1f4b14:
    // 0x1f4b14: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1f4b14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4b20: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f4b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f4b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4B2Cu;
}
