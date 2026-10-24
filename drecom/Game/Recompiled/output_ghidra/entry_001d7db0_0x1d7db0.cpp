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

// Function: entry_001d7db0
// Address: 0x1d7db0 - 0x1d7ef0
void entry_001d7db0_0x1d7db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7db0_0x1d7db0");
#endif

    ctx->pc = 0x1d7db0u;

    // 0x1d7db0: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d7db0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d7db4: 0x17c0ff90  bnez        $fp, . + 4 + (-0x70 << 2)
    ctx->pc = 0x1D7DB4u;
    {
        const bool branch_taken_0x1d7db4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7db4) {
            ctx->pc = 0x1D7BF8u;
            return;
        }
    }
    ctx->pc = 0x1D7DBCu;
    // 0x1d7dbc: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7dc0: 0x8c770068  lw          $s7, 0x68($v1)
    ctx->pc = 0x1d7dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1d7dc4: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x1d7dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x1d7dc8: 0xa6e30006  sh          $v1, 0x6($s7)
    ctx->pc = 0x1d7dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7dcc: 0xa6e00004  sh          $zero, 0x4($s7)
    ctx->pc = 0x1d7dccu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d7dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7dd4: 0x0  nop
    ctx->pc = 0x1d7dd4u;
    // NOP
    // 0x1d7dd8: 0xe6e00010  swc1        $f0, 0x10($s7)
    ctx->pc = 0x1d7dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 16), bits); }
    // 0x1d7ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7de0: 0x0  nop
    ctx->pc = 0x1d7de0u;
    // NOP
    // 0x1d7de4: 0xe6e00014  swc1        $f0, 0x14($s7)
    ctx->pc = 0x1d7de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 20), bits); }
    // 0x1d7de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7dec: 0x0  nop
    ctx->pc = 0x1d7decu;
    // NOP
    // 0x1d7df0: 0xe6e00018  swc1        $f0, 0x18($s7)
    ctx->pc = 0x1d7df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 24), bits); }
    // 0x1d7df4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7df8: 0x0  nop
    ctx->pc = 0x1d7df8u;
    // NOP
    // 0x1d7dfc: 0xe6e0001c  swc1        $f0, 0x1C($s7)
    ctx->pc = 0x1d7dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 28), bits); }
    // 0x1d7e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7e04: 0x0  nop
    ctx->pc = 0x1d7e04u;
    // NOP
    // 0x1d7e08: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1d7e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1d7e0c: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x1d7e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d7e10: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d7e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d7e18: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1d7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d7e1c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7e20: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d7e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7e24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d7e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7e28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d7e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d7e2c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d7e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d7e30: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7e34: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d7e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7e38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7e3c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d7e40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d7e44: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7e48: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x1d7e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d7e4c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d7e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7e50: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d7e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d7e54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d7e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d7e58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d7e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d7e5c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7e60: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1d7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1d7e64: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x1d7e68: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1d7e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d7e6c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d7e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7e70: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x1d7e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x1d7e74: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7e78: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1d7e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1d7e7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d7e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d7e80: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d7e80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7e84: 0x1460ff1b  bnez        $v1, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x1D7E84u;
    {
        const bool branch_taken_0x1d7e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e84) {
            ctx->pc = 0x1D7AF4u;
            return;
        }
    }
    ctx->pc = 0x1D7E8Cu;
    // 0x1d7e8c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d7e90: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x1d7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1d7e94: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1d7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1d7e98: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1d7e9c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7ea0: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x1d7ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x1d7ea4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1d7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d7ea8: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1d7ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1d7eac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d7eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d7eb0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d7eb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7eb4: 0x1460ff0f  bnez        $v1, . + 4 + (-0xF1 << 2)
    ctx->pc = 0x1D7EB4u;
    {
        const bool branch_taken_0x1d7eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7eb4) {
            ctx->pc = 0x1D7AF4u;
            return;
        }
    }
    ctx->pc = 0x1D7EBCu;
    // 0x1d7ebc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d7ebcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d7ec0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d7ec0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d7ec4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d7ec4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d7ec8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d7ec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d7ecc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d7eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d7ed0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d7ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ee4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d7ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7EF0u;
}
