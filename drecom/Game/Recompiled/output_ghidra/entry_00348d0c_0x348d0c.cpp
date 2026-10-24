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

// Function: entry_00348d0c
// Address: 0x348d0c - 0x348e10
void entry_00348d0c_0x348d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348d0c_0x348d0c");
#endif

    switch (ctx->pc) {
        case 0x348d1cu: goto label_348d1c;
        case 0x348da4u: goto label_348da4;
        default: break;
    }

    ctx->pc = 0x348d0cu;

    // 0x348d0c: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x348d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d10: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x348d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x348d14: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x348D14u;
    SET_GPR_U32(ctx, 31, 0x348D1Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x348D14u, 0x348D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D1Cu;
label_348d1c:
    // 0x348d1c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d20: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x348d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x348d24: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x348D24u;
    {
        const bool branch_taken_0x348d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x348d24) {
            ctx->pc = 0x348E38u;
            return;
        }
    }
    ctx->pc = 0x348D2Cu;
    // 0x348d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348d30: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x348d34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x348d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348d3c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d40: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x348d40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x348d44: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x348d48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x348d4c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d50: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x348d50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x348d54: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x348d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x348d5c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x348d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x348d60: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x348d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348d68: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x348d68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x348d6c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x348d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348d74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x348d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x348d78: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x348d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x348d7c: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x348d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x348d80: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x348d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x348d84: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348d88: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x348d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348d8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x348d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x348d90: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x348d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x348d94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x348d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x348d98: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x348d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x348d9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x348D9Cu;
    SET_GPR_U32(ctx, 31, 0x348DA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x348D9Cu, 0x348DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DA4u;
label_348da4:
    // 0x348da4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x348da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x348da8: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x348da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x348dac: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x348dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x348db0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x348db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x348db4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x348db4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x348db8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348dbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348dc0: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x348dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x348dc4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348dc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348dcc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x348dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348dd0: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x348dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x348dd4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x348DD4u;
    {
        const bool branch_taken_0x348dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348dd4) {
            ctx->pc = 0x348E10u;
            return;
        }
    }
    ctx->pc = 0x348DDCu;
    // 0x348ddc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348de0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x348de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348de4: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x348de4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x348de8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x348de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348dec: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x348decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348df0: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x348df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x348df4: 0xa066006f  sb          $a2, 0x6F($v1)
    ctx->pc = 0x348df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 6));
    // 0x348df8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x348df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348dfc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348e00: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x348e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x348e04: 0xa0a30072  sb          $v1, 0x72($a1)
    ctx->pc = 0x348e04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x348e08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x348E08u;
    {
        const bool branch_taken_0x348e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348e08) {
            ctx->pc = 0x348E38u;
            return;
        }
    }
    ctx->pc = 0x348E10u;
}
