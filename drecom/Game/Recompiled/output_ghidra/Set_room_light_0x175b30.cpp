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

// Function: Set_room_light
// Address: 0x175b30 - 0x175c3c
void Set_room_light_0x175b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_room_light_0x175b30");
#endif

    switch (ctx->pc) {
        case 0x175b50u: goto label_175b50;
        case 0x175b98u: goto label_175b98;
        default: break;
    }

    ctx->pc = 0x175b30u;

    // 0x175b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175b34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x175b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x175b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175b40: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x175b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x175b44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x175b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x175b48: 0xc05d504  jal         func_175410
    ctx->pc = 0x175B48u;
    SET_GPR_U32(ctx, 31, 0x175B50u);
    ctx->pc = 0x175410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175410u, 0x175B48u, 0x175B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175B50u;
label_175b50:
    // 0x175b50: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x175b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x175b54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175b58: 0xa423cc8a  sh          $v1, -0x3376($at)
    ctx->pc = 0x175b58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47CC8Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC8Au, _value); } while (0);
    // 0x175b5c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175b60: 0xa420cc8c  sh          $zero, -0x3374($at)
    ctx->pc = 0x175b60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC8Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC8Cu, _value); } while (0);
    // 0x175b64: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175b68: 0x9423cc8a  lhu         $v1, -0x3376($at)
    ctx->pc = 0x175b68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x175b6c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x175b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x175b70: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175b74: 0x9423cc8c  lhu         $v1, -0x3374($at)
    ctx->pc = 0x175b74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Cu));
    // 0x175b78: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x175b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x175b7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x175b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x175b80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x175b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x175b84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175b88: 0xa423cc8e  sh          $v1, -0x3372($at)
    ctx->pc = 0x175b88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47CC8Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC8Eu, _value); } while (0);
    // 0x175b8c: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x175b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x175b90: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x175B90u;
    {
        const bool branch_taken_0x175b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b90) {
            ctx->pc = 0x175C18u;
            goto label_175c18;
        }
    }
    ctx->pc = 0x175B98u;
label_175b98:
    // 0x175b98: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x175b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x175b9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x175b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x175ba0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x175ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x175ba4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x175ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x175ba8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x175ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x175bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175bb0: 0x24700060  addiu       $s0, $v1, 0x60
    ctx->pc = 0x175bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x175bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175bb8: 0x0  nop
    ctx->pc = 0x175bb8u;
    // NOP
    // 0x175bbc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x175bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x175bc0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x175bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175bc4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x175bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x175bc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x175bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x175bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x175bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175bd0: 0x0  nop
    ctx->pc = 0x175bd0u;
    // NOP
    // 0x175bd4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x175bd8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x175bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x175bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x175bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175be0: 0x0  nop
    ctx->pc = 0x175be0u;
    // NOP
    // 0x175be4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x175be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x175be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175bec: 0x0  nop
    ctx->pc = 0x175becu;
    // NOP
    // 0x175bf0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x175bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x175bf4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x175bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x175bf8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x175bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x175bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x175bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175c00: 0x0  nop
    ctx->pc = 0x175c00u;
    // NOP
    // 0x175c04: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x175c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x175c08: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x175c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x175c0c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x175c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x175c10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x175c14: 0x0  nop
    ctx->pc = 0x175c14u;
    // NOP
label_175c18:
    // 0x175c18: 0x2e230050  sltiu       $v1, $s1, 0x50
    ctx->pc = 0x175c18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x175c1c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x175C1Cu;
    {
        const bool branch_taken_0x175c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c1c) {
            ctx->pc = 0x175B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175b98;
        }
    }
    ctx->pc = 0x175C24u;
    // 0x175c24: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x175c24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175c28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175c30: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x175c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x175c34: 0x3e00008  jr          $ra
    ctx->pc = 0x175C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175C3Cu;
}
