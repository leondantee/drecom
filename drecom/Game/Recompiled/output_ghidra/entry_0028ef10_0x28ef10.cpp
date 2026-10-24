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

// Function: entry_0028ef10
// Address: 0x28ef10 - 0x28f03c
void entry_0028ef10_0x28ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ef10_0x28ef10");
#endif

    switch (ctx->pc) {
        case 0x28efa4u: goto label_28efa4;
        case 0x28efc0u: goto label_28efc0;
        default: break;
    }

    ctx->pc = 0x28ef10u;

    // 0x28ef10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ef14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef18: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef1c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x28ef1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ef20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ef24: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef28: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x28ef2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ef30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef34: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef38: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x28ef38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ef3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x28ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28ef40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28ef40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28ef44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef48: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef4c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x28ef4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x28ef50: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x28ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28ef54: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28ef54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28ef58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef5c: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef60: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x28ef60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x28ef64: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ef64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ef68: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28ef6c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x28ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x28ef70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x28ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28ef74: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x28ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x28ef78: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x28ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x28ef7c: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x28ef7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x28ef80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28ef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28ef84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28ef84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28ef88: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x28ef88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x28ef8c: 0x96020224  lhu         $v0, 0x224($s0)
    ctx->pc = 0x28ef8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x28ef90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28ef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28ef94: 0x439825  or          $s3, $v0, $v1
    ctx->pc = 0x28ef94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28ef98: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x28ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28ef9c: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x28EF9Cu;
    SET_GPR_U32(ctx, 31, 0x28EFA4u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x28EF9Cu, 0x28EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFA4u;
label_28efa4:
    // 0x28efa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28efa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28efa8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28efa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28efac: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x28efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x28efb0: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x28efb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x28efb4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x28efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28efb8: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x28EFB8u;
    SET_GPR_U32(ctx, 31, 0x28EFC0u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x28EFB8u, 0x28EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EFC0u;
label_28efc0:
    // 0x28efc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28efc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28efc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28efc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28efc8: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x28efc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x28efcc: 0x2621825  or          $v1, $s3, $v0
    ctx->pc = 0x28efccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x28efd0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x28efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28efd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28efd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28efd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28efdc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28efdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28efe0: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28efe4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x28efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x28efe8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x28efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x28efec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28efecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28eff0: 0x8c222840  lw          $v0, 0x2840($at)
    ctx->pc = 0x28eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622840u));
    // 0x28eff4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x28eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x28eff8: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x28eff8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x28effc: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x28effcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x28f000: 0x96020224  lhu         $v0, 0x224($s0)
    ctx->pc = 0x28f000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x28f004: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28f008: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x28f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x28f00c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28f010: 0xa602022c  sh          $v0, 0x22C($s0)
    ctx->pc = 0x28f010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 2));
    // 0x28f014: 0x96020226  lhu         $v0, 0x226($s0)
    ctx->pc = 0x28f014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x28f018: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28f018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28f01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28f020: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28f020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28f024: 0xa602022e  sh          $v0, 0x22E($s0)
    ctx->pc = 0x28f024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 2));
    // 0x28f028: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f02c: 0xac202848  sw          $zero, 0x2848($at)
    ctx->pc = 0x28f02cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622848u, _value); } while (0);
    // 0x28f030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f034: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F034u;
    {
        const bool branch_taken_0x28f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f034) {
            ctx->pc = 0x28F040u;
            return;
        }
    }
    ctx->pc = 0x28F03Cu;
}
