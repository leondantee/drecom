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

// Function: Om85_R0_init
// Address: 0x360900 - 0x360a08
void Om85_R0_init_0x360900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om85_R0_init_0x360900");
#endif

    switch (ctx->pc) {
        case 0x360924u: goto label_360924;
        case 0x36098cu: goto label_36098c;
        default: break;
    }

    ctx->pc = 0x360900u;

    // 0x360900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x360900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x360904: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x360904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x360908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36090c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36090cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x360910: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x360910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x360914: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x360914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360918: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x360918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36091c: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x36091Cu;
    SET_GPR_U32(ctx, 31, 0x360924u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x36091Cu, 0x360924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360924u;
label_360924:
    // 0x360924: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x360924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360928: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x360928u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x36092c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x36092cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x360930: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x360930u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x360934: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x360934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x360938: 0x2464ac00  addiu       $a0, $v1, -0x5400
    ctx->pc = 0x360938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945792));
    // 0x36093c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360940: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x360940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x360944: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x360944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360948: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36094c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x36094cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x360950: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x360950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x360954: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360958: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x360958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x36095c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360960: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360964: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x360964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x360968: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36096c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x36096cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x360970: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x360970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x360974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x360978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36097c: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x36097cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x360980: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x360980u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360984: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x360984u;
    {
        const bool branch_taken_0x360984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360984) {
            ctx->pc = 0x3609B8u;
            goto label_3609b8;
        }
    }
    ctx->pc = 0x36098Cu;
label_36098c:
    // 0x36098c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x36098cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x360990: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x360990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x360994: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x360994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x360998: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x360998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x36099c: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x36099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x3609a0: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x3609a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3609a4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3609a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3609a8: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x3609a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x3609ac: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3609acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3609b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3609b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3609b4: 0x0  nop
    ctx->pc = 0x3609b4u;
    // NOP
label_3609b8:
    // 0x3609b8: 0x2e03000b  sltiu       $v1, $s0, 0xB
    ctx->pc = 0x3609b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3609bc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3609BCu;
    {
        const bool branch_taken_0x3609bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3609bc) {
            ctx->pc = 0x36098Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36098c;
        }
    }
    ctx->pc = 0x3609C4u;
    // 0x3609c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3609c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3609c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3609ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3609d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3609d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3609d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3609dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3609e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3609e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3609e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3609e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3609ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3609ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3609f0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3609f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3609f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3609f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3609f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3609f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3609fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3609fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x360a00: 0x3e00008  jr          $ra
    ctx->pc = 0x360A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360A08u;
}
