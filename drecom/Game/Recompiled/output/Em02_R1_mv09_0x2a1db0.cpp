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

// Function: Em02_R1_mv09
// Address: 0x2a1db0 - 0x2a2284
void Em02_R1_mv09_0x2a1db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv09_0x2a1db0");
#endif

    switch (ctx->pc) {
        case 0x2a1e60u: goto label_2a1e60;
        case 0x2a1e94u: goto label_2a1e94;
        case 0x2a1ea4u: goto label_2a1ea4;
        case 0x2a1ed8u: goto label_2a1ed8;
        case 0x2a1ee0u: goto label_2a1ee0;
        case 0x2a1fa0u: goto label_2a1fa0;
        case 0x2a1fbcu: goto label_2a1fbc;
        case 0x2a1fd4u: goto label_2a1fd4;
        case 0x2a1fe0u: goto label_2a1fe0;
        case 0x2a1ff0u: goto label_2a1ff0;
        case 0x2a2194u: goto label_2a2194;
        case 0x2a21a0u: goto label_2a21a0;
        default: break;
    }

    ctx->pc = 0x2a1db0u;

    // 0x2a1db0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a1db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a1db4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2a1db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2a1db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1dc0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2a1dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2a1dc4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1dc8: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x2a1dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a1dcc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2a1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2a1dd0: 0x24636b90  addiu       $v1, $v1, 0x6B90
    ctx->pc = 0x2a1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27536));
    // 0x2a1dd4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2a1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2a1dd8: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x2a1dd8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B90u));
    // 0x2a1ddc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2a1ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2a1de0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2a1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2a1de4: 0x24636b98  addiu       $v1, $v1, 0x6B98
    ctx->pc = 0x2a1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27544));
    // 0x2a1de8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a1de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a1dec: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x2a1decu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B98u));
    // 0x2a1df0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2a1df0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2a1df4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1df8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2a1df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a1dfc: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2a1dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a1e00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2a1e04: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2a1e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a1e08: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2a1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x2a1e0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1e10: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2a1e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a1e14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a1e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a1e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1e1c: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2A1E1Cu;
    {
        const bool branch_taken_0x2a1e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a1e1c) {
            ctx->pc = 0x2A1F74u;
            goto label_2a1f74;
        }
    }
    ctx->pc = 0x2A1E24u;
    // 0x2a1e24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1E24u;
    {
        const bool branch_taken_0x2a1e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e24) {
            ctx->pc = 0x2A1E34u;
            goto label_2a1e34;
        }
    }
    ctx->pc = 0x2A1E2Cu;
    // 0x2a1e2c: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x2A1E2Cu;
    {
        const bool branch_taken_0x2a1e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e2c) {
            ctx->pc = 0x2A226Cu;
            goto label_2a226c;
        }
    }
    ctx->pc = 0x2A1E34u;
label_2a1e34:
    // 0x2a1e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1e38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1e3c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a1e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1e40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1e44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1e48: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2a1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a1e4c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2a1e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2a1e50: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A1E50u;
    {
        const bool branch_taken_0x2a1e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e50) {
            ctx->pc = 0x2A1E9Cu;
            goto label_2a1e9c;
        }
    }
    ctx->pc = 0x2A1E58u;
    // 0x2a1e58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A1E58u;
    SET_GPR_U32(ctx, 31, 0x2A1E60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A1E58u, 0x2A1E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E60u;
label_2a1e60:
    // 0x2a1e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1e64: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a1e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a1e68: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a1e6c: 0x90420048  lbu         $v0, 0x48($v0)
    ctx->pc = 0x2a1e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2a1e70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1e74: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x2a1e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2a1e78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1e7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1e80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a1e84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1e88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1e8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1E8Cu, 0x2A1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1E94u;
label_2a1e94:
    // 0x2a1e94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A1E94u;
    {
        const bool branch_taken_0x2a1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1e94) {
            ctx->pc = 0x2A1ED8u;
            goto label_2a1ed8;
        }
    }
    ctx->pc = 0x2A1E9Cu;
label_2a1e9c:
    // 0x2a1e9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A1E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A1EA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A1E9Cu, 0x2A1EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EA4u;
label_2a1ea4:
    // 0x2a1ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1ea8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a1ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a1eac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a1eb0: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x2a1eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2a1eb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1eb8: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x2a1eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2a1ebc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ec0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ec4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a1ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a1ec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1ecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1ed0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1ED0u;
    SET_GPR_U32(ctx, 31, 0x2A1ED8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1ED0u, 0x2A1ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1ED8u;
label_2a1ed8:
    // 0x2a1ed8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A1ED8u;
    SET_GPR_U32(ctx, 31, 0x2A1EE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A1ED8u, 0x2A1EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1EE0u;
label_2a1ee0:
    // 0x2a1ee0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1ee4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2a1ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2a1ee8: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2a1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2a1eec: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2a1eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a1ef0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a1ef0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a1ef4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ef8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2a1ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a1efc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a1f00: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a1f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1f10: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a1f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2a1f14: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2a1f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2a1f18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1f1c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1F1Cu;
    {
        const bool branch_taken_0x2a1f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1f1c) {
            ctx->pc = 0x2A1F3Cu;
            goto label_2a1f3c;
        }
    }
    ctx->pc = 0x2A1F24u;
    // 0x2a1f24: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2a1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2a1f28: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a1f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1f38: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a1f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2a1f3c:
    // 0x2a1f3c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2a1f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2a1f40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a1f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1f44: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1F44u;
    {
        const bool branch_taken_0x2a1f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1f44) {
            ctx->pc = 0x2A1F64u;
            goto label_2a1f64;
        }
    }
    ctx->pc = 0x2A1F4Cu;
    // 0x2a1f4c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2a1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2a1f50: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2a1f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2a1f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1f60: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a1f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2a1f64:
    // 0x2a1f64: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a1f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f70: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2a1f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
label_2a1f74:
    // 0x2a1f74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2a1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f80: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1f84: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1f88: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2a1f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1f8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a1f90: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a1f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a1f94: 0xc46d0018  lwc1        $f13, 0x18($v1)
    ctx->pc = 0x2a1f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a1f98: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A1F98u;
    SET_GPR_U32(ctx, 31, 0x2A1FA0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A1F98u, 0x2A1FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FA0u;
label_2a1fa0:
    // 0x2a1fa0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2a1fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2a1fa4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fa8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1fac: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2a1facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1fb0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a1fb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a1fb4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1FB4u;
    SET_GPR_U32(ctx, 31, 0x2A1FBCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1FB4u, 0x2A1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FBCu;
label_2a1fbc:
    // 0x2a1fbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fc0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a1fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a1fc4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1fc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1fcc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A1FCCu;
    SET_GPR_U32(ctx, 31, 0x2A1FD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A1FCCu, 0x2A1FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FD4u;
label_2a1fd4:
    // 0x2a1fd4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fd8: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A1FD8u;
    SET_GPR_U32(ctx, 31, 0x2A1FE0u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A1FD8u, 0x2A1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FE0u;
label_2a1fe0:
    // 0x2a1fe0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fe4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2a1fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2a1fe8: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A1FE8u;
    SET_GPR_U32(ctx, 31, 0x2A1FF0u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A1FE8u, 0x2A1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FF0u;
label_2a1ff0:
    // 0x2a1ff0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ff4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1ff8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1ffc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A1FFCu;
    {
        const bool branch_taken_0x2a1ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ffc) {
            ctx->pc = 0x2A20C0u;
            goto label_2a20c0;
        }
    }
    ctx->pc = 0x2A2004u;
    // 0x2a2004: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2008: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a200c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2010: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2a2010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2014: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a2014u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2018: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a201c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a201cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2020: 0x0  nop
    ctx->pc = 0x2a2020u;
    // NOP
    // 0x2a2024: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2028: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a2028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a202c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2030: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2034: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2038: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2a2038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a203c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a203cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2040: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a2044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2048: 0x0  nop
    ctx->pc = 0x2a2048u;
    // NOP
    // 0x2a204c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a204cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2050: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a2050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a2054: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2058: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a205c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2060: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2a2060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2064: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a2064u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2068: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a206c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a206cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2070: 0x0  nop
    ctx->pc = 0x2a2070u;
    // NOP
    // 0x2a2074: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2078: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2a2078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a207c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2080: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a2080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2084: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2a2084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2088: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a208c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2a208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2a2090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2094: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2a2094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2098: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a209c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a209cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a20a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2a20a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2a20a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a20a8: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a20ac: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2a20acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a20b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a20b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a20b4: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2a20b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x2a20b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2A20B8u;
    {
        const bool branch_taken_0x2a20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a20b8) {
            ctx->pc = 0x2A2188u;
            goto label_2a2188;
        }
    }
    ctx->pc = 0x2A20C0u;
label_2a20c0:
    // 0x2a20c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a20c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a20c8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a20cc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A20CCu;
    {
        const bool branch_taken_0x2a20cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a20cc) {
            ctx->pc = 0x2A2188u;
            goto label_2a2188;
        }
    }
    ctx->pc = 0x2A20D4u;
    // 0x2a20d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a20d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a20dc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a20e0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2a20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a20e4: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a20e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a20e8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a20ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a20ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a20f0: 0x0  nop
    ctx->pc = 0x2a20f0u;
    // NOP
    // 0x2a20f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a20f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a20f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a20f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a20fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2100: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2104: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a2104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a2108: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2a2108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a210c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a210cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2110: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a2114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2118: 0x0  nop
    ctx->pc = 0x2a2118u;
    // NOP
    // 0x2a211c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a211cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2120: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a2120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a2124: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2128: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a212c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2a212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a2130: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2a2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2134: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a2134u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2138: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a213c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2140: 0x0  nop
    ctx->pc = 0x2a2140u;
    // NOP
    // 0x2a2144: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2148: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2a2148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a214c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2150: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a2150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2154: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2a2154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2158: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a215c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2a215cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2a2160: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2164: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2a2164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2168: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a2168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a216c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a216cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2170: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2a2170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2a2174: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2178: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a2178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a217c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2a217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2180: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2184: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2a2184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_2a2188:
    // 0x2a2188: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a2188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a218c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A218Cu;
    SET_GPR_U32(ctx, 31, 0x2A2194u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A218Cu, 0x2A2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2194u;
label_2a2194:
    // 0x2a2194: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a2194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2198: 0xc0aa380  jal         func_2A8E00
    ctx->pc = 0x2A2198u;
    SET_GPR_U32(ctx, 31, 0x2A21A0u);
    ctx->pc = 0x2A8E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E00u, 0x2A2198u, 0x2A21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A21A0u;
label_2a21a0:
    // 0x2a21a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a21a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a21ac: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A21ACu;
    {
        const bool branch_taken_0x2a21ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a21ac) {
            ctx->pc = 0x2A2208u;
            goto label_2a2208;
        }
    }
    ctx->pc = 0x2A21B4u;
    // 0x2a21b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a21bc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2a21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a21c0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A21C0u;
    {
        const bool branch_taken_0x2a21c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a21c0) {
            ctx->pc = 0x2A2208u;
            goto label_2a2208;
        }
    }
    ctx->pc = 0x2A21C8u;
    // 0x2a21c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a21c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a21cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21d0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a21d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a21d4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a21d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a21d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21dc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a21dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a21e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a21e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a21e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a21ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a21f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a21f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a21f8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a21f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a21fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a21fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2200: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2204: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2a2204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
label_2a2208:
    // 0x2a2208: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a220c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a220cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2210: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a2210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2214: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2218: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a2218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a221c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a221cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2220: 0x0  nop
    ctx->pc = 0x2a2220u;
    // NOP
    // 0x2a2224: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2224u;
    {
        const bool branch_taken_0x2a2224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a2224) {
            ctx->pc = 0x2A226Cu;
            goto label_2a226c;
        }
    }
    ctx->pc = 0x2A222Cu;
    // 0x2a222c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2230: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2234: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a2234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2238: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a2238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a223c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2240: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a2240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2244: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2248: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a2248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a224c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2250: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a2250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2254: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2258: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a2258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a225c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a225cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a2260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2264: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a2264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2268: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2a2268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
label_2a226c:
    // 0x2a226c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2a226cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2278: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a2278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a227c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A227Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A227Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2284u;
}
