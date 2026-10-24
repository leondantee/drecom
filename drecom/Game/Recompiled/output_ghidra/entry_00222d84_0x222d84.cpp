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

// Function: entry_00222d84
// Address: 0x222d84 - 0x222e68
void entry_00222d84_0x222d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222d84_0x222d84");
#endif

    switch (ctx->pc) {
        case 0x222e1cu: goto label_222e1c;
        default: break;
    }

    ctx->pc = 0x222d84u;

    // 0x222d84: 0xaea000f0  sw          $zero, 0xF0($s5)
    ctx->pc = 0x222d84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 0));
    // 0x222d88: 0x8ea400f0  lw          $a0, 0xF0($s5)
    ctx->pc = 0x222d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x222d8c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x222d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x222d90: 0x82f025  or          $fp, $a0, $v0
    ctx->pc = 0x222d90u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x222d94: 0xaebe00f0  sw          $fp, 0xF0($s5)
    ctx->pc = 0x222d94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 30));
    // 0x222d98: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x222d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x222d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222da0: 0x0  nop
    ctx->pc = 0x222da0u;
    // NOP
    // 0x222da4: 0xe6a000d0  swc1        $f0, 0xD0($s5)
    ctx->pc = 0x222da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 208), bits); }
    // 0x222da8: 0xe6a000d4  swc1        $f0, 0xD4($s5)
    ctx->pc = 0x222da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 212), bits); }
    // 0x222dac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x222dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x222db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222db4: 0x0  nop
    ctx->pc = 0x222db4u;
    // NOP
    // 0x222db8: 0xe6a000e0  swc1        $f0, 0xE0($s5)
    ctx->pc = 0x222db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 224), bits); }
    // 0x222dbc: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x222dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x222dc0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x222dc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222dc4: 0x0  nop
    ctx->pc = 0x222dc4u;
    // NOP
    // 0x222dc8: 0xe6a000d8  swc1        $f0, 0xD8($s5)
    ctx->pc = 0x222dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 216), bits); }
    // 0x222dcc: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x222dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222dd0: 0x24e20120  addiu       $v0, $a3, 0x120
    ctx->pc = 0x222dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x222dd4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x222dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x222dd8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x222dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x222ddc: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x222ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222de0: 0x251700d0  addiu       $s7, $t0, 0xD0
    ctx->pc = 0x222de0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
    // 0x222de4: 0xaeb7000c  sw          $s7, 0xC($s5)
    ctx->pc = 0x222de4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 23));
    // 0x222de8: 0x3c09c348  lui         $t1, 0xC348
    ctx->pc = 0x222de8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49992 << 16));
    // 0x222dec: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x222decu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222df0: 0x0  nop
    ctx->pc = 0x222df0u;
    // NOP
    // 0x222df4: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x222df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x222df8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x222df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x222dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222e00: 0x0  nop
    ctx->pc = 0x222e00u;
    // NOP
    // 0x222e04: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x222e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x222e08: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x222e08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222e0c: 0x8d560130  lw          $s6, 0x130($t2)
    ctx->pc = 0x222e0cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 304)));
    // 0x222e10: 0xaeb60008  sw          $s6, 0x8($s5)
    ctx->pc = 0x222e10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 22));
    // 0x222e14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x222E14u;
    SET_GPR_U32(ctx, 31, 0x222E1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x222E14u, 0x222E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E1Cu;
label_222e1c:
    // 0x222e1c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x222e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222e20: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x222e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x222e24: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x222e24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x222e28: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x222e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x222e2c: 0x2444ac50  addiu       $a0, $v0, -0x53B0
    ctx->pc = 0x222e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x222e30: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x222e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x222e34: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x222e34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222e38: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x222e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222e3c: 0xa48210a6  sh          $v0, 0x10A6($a0)
    ctx->pc = 0x222e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x222e40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x222e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x222e44: 0x90220e05  lbu         $v0, 0xE05($at)
    ctx->pc = 0x222e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x222e48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x222e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222e50: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222E50u;
    {
        const bool branch_taken_0x222e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222e50) {
            ctx->pc = 0x222E68u;
            return;
        }
    }
    ctx->pc = 0x222E58u;
    // 0x222e58: 0x8fb70128  lw          $s7, 0x128($sp)
    ctx->pc = 0x222e58u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222e5c: 0x86e310a6  lh          $v1, 0x10A6($s7)
    ctx->pc = 0x222e5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4262)));
    // 0x222e60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x222e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x222e64: 0xa6e210a6  sh          $v0, 0x10A6($s7)
    ctx->pc = 0x222e64u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4262), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x222e68u;
}
