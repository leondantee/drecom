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

// Function: entry_00291eb8
// Address: 0x291eb8 - 0x29202c
void entry_00291eb8_0x291eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291eb8_0x291eb8");
#endif

    switch (ctx->pc) {
        case 0x291f00u: goto label_291f00;
        case 0x291f9cu: goto label_291f9c;
        case 0x291fd8u: goto label_291fd8;
        case 0x292008u: goto label_292008;
        default: break;
    }

    ctx->pc = 0x291eb8u;

    // 0x291eb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291ebc: 0x8c222a68  lw          $v0, 0x2A68($at)
    ctx->pc = 0x291ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A68u));
    // 0x291ec0: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x291ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291ec4: 0x1020fe89  beqz        $at, . + 4 + (-0x177 << 2)
    ctx->pc = 0x291EC4u;
    {
        const bool branch_taken_0x291ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ec4) {
            ctx->pc = 0x2918ECu;
            return;
        }
    }
    ctx->pc = 0x291ECCu;
    // 0x291ecc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291ed0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291ed4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291ed8: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x291ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x291edc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291ee0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x291ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x291ee4: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x291ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x291ee8: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291eec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x291eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291ef0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x291ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x291ef4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291ef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291ef8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291EF8u;
    SET_GPR_U32(ctx, 31, 0x291F00u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291EF8u, 0x291F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F00u;
label_291f00:
    // 0x291f00: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291f04: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291f04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291f08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291f0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291f10: 0x3c170400  lui         $s7, 0x400
    ctx->pc = 0x291f10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1024 << 16));
    // 0x291f14: 0x36e21009  ori         $v0, $s7, 0x1009
    ctx->pc = 0x291f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4105);
    // 0x291f18: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291f1c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f20: 0x94420030  lhu         $v0, 0x30($v0)
    ctx->pc = 0x291f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x291f24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291f28: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x291f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x291f2c: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x291f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x291f30: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f34: 0x94430034  lhu         $v1, 0x34($v0)
    ctx->pc = 0x291f34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x291f38: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x291f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x291f3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x291f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x291f40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291f44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x291f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291f48: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x291f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x291f4c: 0xc2b825  or          $s7, $a2, $v0
    ctx->pc = 0x291f4cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x291f50: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f54: 0x94420032  lhu         $v0, 0x32($v0)
    ctx->pc = 0x291f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x291f58: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291f5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x291f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x291f60: 0x573025  or          $a2, $v0, $s7
    ctx->pc = 0x291f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x291f64: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f68: 0x94430036  lhu         $v1, 0x36($v0)
    ctx->pc = 0x291f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x291f6c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x291f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x291f70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x291f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x291f74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291f78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x291f78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291f7c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x291f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x291f80: 0x46b825  or          $s7, $v0, $a2
    ctx->pc = 0x291f80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x291f84: 0xfe370008  sd          $s7, 0x8($s1)
    ctx->pc = 0x291f84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 23));
    // 0x291f88: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291f90: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291f90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291f94: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291F94u;
    SET_GPR_U32(ctx, 31, 0x291F9Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291F94u, 0x291F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F9Cu;
label_291f9c:
    // 0x291f9c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291fa0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291fa0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291fa4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x291fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x291fa8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x291fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x291fac: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x291facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x291fb0: 0x3462103b  ori         $v0, $v1, 0x103B
    ctx->pc = 0x291fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4155);
    // 0x291fb4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291fb8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x291fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x291fbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291fc0: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291fc4: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291fc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291fcc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291fd0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291FD0u;
    SET_GPR_U32(ctx, 31, 0x291FD8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291FD0u, 0x291FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FD8u;
label_291fd8:
    // 0x291fd8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291fdc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291fdcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291fe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291fe4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291fe8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291fec: 0x3443103f  ori         $v1, $v0, 0x103F
    ctx->pc = 0x291fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x291ff0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x291ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x291ff4: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ff8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291ffc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291ffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x292000: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x292000u;
    SET_GPR_U32(ctx, 31, 0x292008u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x292000u, 0x292008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292008u;
label_292008:
    // 0x292008: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x292008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x29200c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29200cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x292010: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x292010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x292014: 0x8c232a58  lw          $v1, 0x2A58($at)
    ctx->pc = 0x292014u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622A58u));
    // 0x292018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29201c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29201Cu;
    {
        const bool branch_taken_0x29201c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29201c) {
            ctx->pc = 0x29202Cu;
            return;
        }
    }
    ctx->pc = 0x292024u;
    // 0x292024: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x292024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x292028: 0xac202a50  sw          $zero, 0x2A50($at)
    ctx->pc = 0x292028u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A50u, _value); } while (0);
    ctx->pc = 0x29202cu;
}
