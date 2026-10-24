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

// Function: Get_sequence2
// Address: 0x25e830 - 0x25e970
void Get_sequence2_0x25e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_sequence2_0x25e830");
#endif

    ctx->pc = 0x25e830u;

    // 0x25e830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e834: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x25e834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x25e838: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e83c: 0xdc630a08  ld          $v1, 0xA08($v1)
    ctx->pc = 0x25e83cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 2568)));
    // 0x25e840: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x25E840u;
    {
        const bool branch_taken_0x25e840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e840) {
            ctx->pc = 0x25E944u;
            goto label_25e944;
        }
    }
    ctx->pc = 0x25E848u;
    // 0x25e848: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e84c: 0xa0601085  sb          $zero, 0x1085($v1)
    ctx->pc = 0x25e84cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4229), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e850: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e854: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x25e854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x25e858: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25e858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25e85c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x25e85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x25e860: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x25E860u;
    {
        const bool branch_taken_0x25e860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e860) {
            ctx->pc = 0x25E914u;
            goto label_25e914;
        }
    }
    ctx->pc = 0x25E868u;
    // 0x25e868: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x25e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e86c: 0x948310a0  lhu         $v1, 0x10A0($a0)
    ctx->pc = 0x25e86cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4256)));
    // 0x25e870: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25e874: 0xa48310a0  sh          $v1, 0x10A0($a0)
    ctx->pc = 0x25e874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4256), (uint16_t)GPR_U32(ctx, 3));
    // 0x25e878: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e87c: 0x946310a0  lhu         $v1, 0x10A0($v1)
    ctx->pc = 0x25e87cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4256)));
    // 0x25e880: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x25e880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25e884: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e888: 0x946310a2  lhu         $v1, 0x10A2($v1)
    ctx->pc = 0x25e888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4258)));
    // 0x25e88c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25e88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25e890: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x25e890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25e894: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E894u;
    {
        const bool branch_taken_0x25e894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e894) {
            ctx->pc = 0x25E8B0u;
            goto label_25e8b0;
        }
    }
    ctx->pc = 0x25E89Cu;
    // 0x25e89c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8a0: 0xa46010a0  sh          $zero, 0x10A0($v1)
    ctx->pc = 0x25e8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4256), (uint16_t)GPR_U32(ctx, 0));
    // 0x25e8a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e8a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8ac: 0xa0641085  sb          $a0, 0x1085($v1)
    ctx->pc = 0x25e8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4229), (uint8_t)GPR_U32(ctx, 4));
label_25e8b0:
    // 0x25e8b0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x25e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8b8: 0x24841078  addiu       $a0, $a0, 0x1078
    ctx->pc = 0x25e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4216));
    // 0x25e8bc: 0x2463107c  addiu       $v1, $v1, 0x107C
    ctx->pc = 0x25e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4220));
    // 0x25e8c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e8c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25e8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25e8c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8cc: 0x946310a0  lhu         $v1, 0x10A0($v1)
    ctx->pc = 0x25e8ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4256)));
    // 0x25e8d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25e8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25e8d4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e8d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8dc: 0x8c630ca0  lw          $v1, 0xCA0($v1)
    ctx->pc = 0x25e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3232)));
    // 0x25e8e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25e8e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8e8: 0x24631078  addiu       $v1, $v1, 0x1078
    ctx->pc = 0x25e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4216));
    // 0x25e8ec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e8f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25e8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25e8f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8f8: 0x94631078  lhu         $v1, 0x1078($v1)
    ctx->pc = 0x25e8f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4216)));
    // 0x25e8fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25e8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25e900: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25e900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e904: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e908: 0xac641098  sw          $a0, 0x1098($v1)
    ctx->pc = 0x25e908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4248), GPR_U32(ctx, 4));
    // 0x25e90c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25E90Cu;
    {
        const bool branch_taken_0x25e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e90c) {
            ctx->pc = 0x25E964u;
            goto label_25e964;
        }
    }
    ctx->pc = 0x25E914u;
label_25e914:
    // 0x25e914: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x25e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e918: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e91c: 0x24841078  addiu       $a0, $a0, 0x1078
    ctx->pc = 0x25e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4216));
    // 0x25e920: 0x2463107c  addiu       $v1, $v1, 0x107C
    ctx->pc = 0x25e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4220));
    // 0x25e924: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e928: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25e928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25e92c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x25e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e930: 0x9083107a  lbu         $v1, 0x107A($a0)
    ctx->pc = 0x25e930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4218)));
    // 0x25e934: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x25e934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x25e938: 0xa083107a  sb          $v1, 0x107A($a0)
    ctx->pc = 0x25e938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4218), (uint8_t)GPR_U32(ctx, 3));
    // 0x25e93c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25E93Cu;
    {
        const bool branch_taken_0x25e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e93c) {
            ctx->pc = 0x25E964u;
            goto label_25e964;
        }
    }
    ctx->pc = 0x25E944u;
label_25e944:
    // 0x25e944: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e948: 0xa060107a  sb          $zero, 0x107A($v1)
    ctx->pc = 0x25e948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4218), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e94c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e950: 0xa060107b  sb          $zero, 0x107B($v1)
    ctx->pc = 0x25e950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4219), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e954: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e958: 0xa060107e  sb          $zero, 0x107E($v1)
    ctx->pc = 0x25e958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4222), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e95c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e960: 0xa060107f  sb          $zero, 0x107F($v1)
    ctx->pc = 0x25e960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4223), (uint8_t)GPR_U32(ctx, 0));
label_25e964:
    // 0x25e964: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25e964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25e968: 0x3e00008  jr          $ra
    ctx->pc = 0x25E968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E970u;
}
