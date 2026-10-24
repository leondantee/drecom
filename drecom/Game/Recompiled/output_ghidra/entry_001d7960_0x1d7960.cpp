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

// Function: entry_001d7960
// Address: 0x1d7960 - 0x1d7a70
void entry_001d7960_0x1d7960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7960_0x1d7960");
#endif

    ctx->pc = 0x1d7960u;

    // 0x1d7960: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d7960u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d7964: 0x17c0ffa0  bnez        $fp, . + 4 + (-0x60 << 2)
    ctx->pc = 0x1D7964u;
    {
        const bool branch_taken_0x1d7964 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7964) {
            ctx->pc = 0x1D77E8u;
            return;
        }
    }
    ctx->pc = 0x1D796Cu;
    // 0x1d796c: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d7970: 0x8c770068  lw          $s7, 0x68($v1)
    ctx->pc = 0x1d7970u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1d7974: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x1d7974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x1d7978: 0xa6e30006  sh          $v1, 0x6($s7)
    ctx->pc = 0x1d7978u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d797c: 0xa6e00004  sh          $zero, 0x4($s7)
    ctx->pc = 0x1d797cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d7980: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7984: 0x0  nop
    ctx->pc = 0x1d7984u;
    // NOP
    // 0x1d7988: 0xe6e00010  swc1        $f0, 0x10($s7)
    ctx->pc = 0x1d7988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 16), bits); }
    // 0x1d798c: 0x26c40001  addiu       $a0, $s6, 0x1
    ctx->pc = 0x1d798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d7990: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d7990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d7994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d7998: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1d7998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d799c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d79a0: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d79a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d79a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d79a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d79ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d79acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d79b0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d79b4: 0x24640a68  addiu       $a0, $v1, 0xA68
    ctx->pc = 0x1d79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d79b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d79bc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d79c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d79c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d79c4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1d79c8: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x1d79c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x1d79cc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d79d0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1d79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d79d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d79d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d79d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1d79dc: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1d79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1d79e0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1d79e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1d79e4: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1d79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x1d79e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1d79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d79ec: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d79ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d79f0: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1d79f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1d79f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d79f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d79f8: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1d79f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1d79fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d79fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d7a00: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d7a00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7a04: 0x1460ff47  bnez        $v1, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x1D7A04u;
    {
        const bool branch_taken_0x1d7a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a04) {
            ctx->pc = 0x1D7724u;
            return;
        }
    }
    ctx->pc = 0x1D7A0Cu;
    // 0x1d7a0c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d7a10: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x1d7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1d7a14: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1d7a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1d7a18: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1d7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7a1c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d7a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d7a20: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1d7a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x1d7a24: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1d7a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d7a28: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1d7a28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1d7a2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d7a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d7a30: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1d7a30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d7a34: 0x1460ff3b  bnez        $v1, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x1D7A34u;
    {
        const bool branch_taken_0x1d7a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a34) {
            ctx->pc = 0x1D7724u;
            return;
        }
    }
    ctx->pc = 0x1D7A3Cu;
    // 0x1d7a3c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d7a3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d7a40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d7a40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d7a44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d7a44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d7a48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d7a48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d7a4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d7a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d7a50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d7a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7a54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7a54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7a58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7a64: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1d7a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d7a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7A70u;
}
