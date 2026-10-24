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

// Function: Plw02_atk00_on
// Address: 0x1c1ed0 - 0x1c21f0
void Plw02_atk00_on_0x1c1ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk00_on_0x1c1ed0");
#endif

    switch (ctx->pc) {
        case 0x1c1f50u: goto label_1c1f50;
        case 0x1c1f78u: goto label_1c1f78;
        case 0x1c1f98u: goto label_1c1f98;
        case 0x1c1fb0u: goto label_1c1fb0;
        case 0x1c1fc0u: goto label_1c1fc0;
        case 0x1c2008u: goto label_1c2008;
        case 0x1c202cu: goto label_1c202c;
        case 0x1c2038u: goto label_1c2038;
        case 0x1c204cu: goto label_1c204c;
        case 0x1c2070u: goto label_1c2070;
        case 0x1c2084u: goto label_1c2084;
        case 0x1c20a0u: goto label_1c20a0;
        case 0x1c20b0u: goto label_1c20b0;
        case 0x1c20bcu: goto label_1c20bc;
        case 0x1c20d0u: goto label_1c20d0;
        case 0x1c20dcu: goto label_1c20dc;
        case 0x1c20e4u: goto label_1c20e4;
        case 0x1c213cu: goto label_1c213c;
        default: break;
    }

    ctx->pc = 0x1c1ed0u;

    // 0x1c1ed0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c1ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c1ed4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c1ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c1ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1edc: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1c1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1c1ee0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c1ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c1ee4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c1ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c1ee8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c1ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1eec: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c1eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c1ef0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c1ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1ef8: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C1EF8u;
    {
        const bool branch_taken_0x1c1ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1ef8) {
            ctx->pc = 0x1C1FD0u;
            goto label_1c1fd0;
        }
    }
    ctx->pc = 0x1C1F00u;
    // 0x1c1f00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1F00u;
    {
        const bool branch_taken_0x1c1f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f00) {
            ctx->pc = 0x1C1F10u;
            goto label_1c1f10;
        }
    }
    ctx->pc = 0x1C1F08u;
    // 0x1c1f08: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1C1F08u;
    {
        const bool branch_taken_0x1c1f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f08) {
            ctx->pc = 0x1C21DCu;
            goto label_1c21dc;
        }
    }
    ctx->pc = 0x1C1F10u;
label_1c1f10:
    // 0x1c1f10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f14: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1f18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f1c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c1f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c1f20: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c1f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c1f24: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c1f28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C1F28u;
    {
        const bool branch_taken_0x1c1f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f28) {
            ctx->pc = 0x1C1F58u;
            goto label_1c1f58;
        }
    }
    ctx->pc = 0x1C1F30u;
    // 0x1c1f30: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f34: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f38: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1f3c: 0x24061403  addiu       $a2, $zero, 0x1403
    ctx->pc = 0x1c1f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5123));
    // 0x1c1f40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1f44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1f48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C1F48u;
    SET_GPR_U32(ctx, 31, 0x1C1F50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C1F48u, 0x1C1F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F50u;
label_1c1f50:
    // 0x1c1f50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1F50u;
    {
        const bool branch_taken_0x1c1f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f50) {
            ctx->pc = 0x1C1F78u;
            goto label_1c1f78;
        }
    }
    ctx->pc = 0x1C1F58u;
label_1c1f58:
    // 0x1c1f58: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f60: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1f64: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x1c1f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1c1f68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1f6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1f70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C1F70u;
    SET_GPR_U32(ctx, 31, 0x1C1F78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C1F70u, 0x1C1F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F78u;
label_1c1f78:
    // 0x1c1f78: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c1f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c1f7c: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c1f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c1f80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f84: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1f88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c1f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1f8c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1f90: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C1F90u;
    SET_GPR_U32(ctx, 31, 0x1C1F98u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C1F90u, 0x1C1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F98u;
label_1c1f98:
    // 0x1c1f98: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1f9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fa0: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c1fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1fa4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c1fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c1fa8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C1FA8u;
    SET_GPR_U32(ctx, 31, 0x1C1FB0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C1FA8u, 0x1C1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FB0u;
label_1c1fb0:
    // 0x1c1fb0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c1fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c1fb4: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1c1fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1fb8: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1C1FB8u;
    SET_GPR_U32(ctx, 31, 0x1C1FC0u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1C1FB8u, 0x1C1FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FC0u;
label_1c1fc0:
    // 0x1c1fc0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fc4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c1fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c1fc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1fcc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c1fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c1fd0:
    // 0x1c1fd0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fd4: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c1fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1fd8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fdc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c1fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c1fe0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fe4: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x1c1fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x1c1fe8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C1FE8u;
    {
        const bool branch_taken_0x1c1fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1fe8) {
            ctx->pc = 0x1C20A0u;
            goto label_1c20a0;
        }
    }
    ctx->pc = 0x1C1FF0u;
    // 0x1c1ff0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1ff4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1ff8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1c1ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1ffc: 0xc44d137c  lwc1        $f13, 0x137C($v0)
    ctx->pc = 0x1c1ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c2000: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C2000u;
    SET_GPR_U32(ctx, 31, 0x1C2008u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C2000u, 0x1C2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2008u;
label_1c2008:
    // 0x1c2008: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c2008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c200c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2010: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1c2010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1c2014: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2018: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c201c: 0x246506f0  addiu       $a1, $v1, 0x6F0
    ctx->pc = 0x1c201cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1776));
    // 0x1c2020: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1c2020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c2024: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C2024u;
    SET_GPR_U32(ctx, 31, 0x1C202Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C2024u, 0x1C202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C202Cu;
label_1c202c:
    // 0x1c202c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2030: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1C2030u;
    SET_GPR_U32(ctx, 31, 0x1C2038u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1C2038u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C2038u) { return; }
    ctx->pc = 0x1C2038u;
label_1c2038:
    // 0x1c2038: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c203c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c203cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2040: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1c2040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2044: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1C2044u;
    SET_GPR_U32(ctx, 31, 0x1C204Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1C204Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C204Cu) { return; }
    ctx->pc = 0x1C204Cu;
label_1c204c:
    // 0x1c204c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1c204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2050: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1c2050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2054: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c2054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c2058: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1c2058u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1c205c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c2060: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c2060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2064: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c2064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c2068: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1C2068u;
    SET_GPR_U32(ctx, 31, 0x1C2070u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1C2070u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C2070u) { return; }
    ctx->pc = 0x1C2070u;
label_1c2070:
    // 0x1c2070: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2074: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c2074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2078: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c2078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c207c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C207Cu;
    SET_GPR_U32(ctx, 31, 0x1C2084u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C207Cu, 0x1C2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2084u;
label_1c2084:
    // 0x1c2084: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c2084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2088: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c2088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c208c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c2090: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1c2090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c2094: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c2094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2098: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1C2098u;
    SET_GPR_U32(ctx, 31, 0x1C20A0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1C2098u, 0x1C20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20A0u;
label_1c20a0:
    // 0x1c20a0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c20a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c20a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c20a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C20A8u;
    SET_GPR_U32(ctx, 31, 0x1C20B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C20A8u, 0x1C20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20B0u;
label_1c20b0:
    // 0x1c20b0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c20b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c20b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C20B4u;
    SET_GPR_U32(ctx, 31, 0x1C20BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C20B4u, 0x1C20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20BCu;
label_1c20bc:
    // 0x1c20bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c20bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c20c0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c20c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c20c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c20c8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C20C8u;
    SET_GPR_U32(ctx, 31, 0x1C20D0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C20C8u, 0x1C20D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20D0u;
label_1c20d0:
    // 0x1c20d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c20d4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C20D4u;
    SET_GPR_U32(ctx, 31, 0x1C20DCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C20D4u, 0x1C20DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20DCu;
label_1c20dc:
    // 0x1c20dc: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1C20DCu;
    SET_GPR_U32(ctx, 31, 0x1C20E4u);
    ctx->pc = 0x1B4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E40u, 0x1C20DCu, 0x1C20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20E4u;
label_1c20e4:
    // 0x1c20e4: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C20E4u;
    {
        const bool branch_taken_0x1c20e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c20e4) {
            ctx->pc = 0x1C21DCu;
            goto label_1c21dc;
        }
    }
    ctx->pc = 0x1C20ECu;
    // 0x1c20ec: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c20f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c20f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c20f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C20F4u;
    {
        const bool branch_taken_0x1c20f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c20f4) {
            ctx->pc = 0x1C2128u;
            goto label_1c2128;
        }
    }
    ctx->pc = 0x1C20FCu;
    // 0x1c20fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2100: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2104: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c2104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c2108: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c2108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c210c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C210Cu;
    {
        const bool branch_taken_0x1c210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c210c) {
            ctx->pc = 0x1C2128u;
            goto label_1c2128;
        }
    }
    ctx->pc = 0x1C2114u;
    // 0x1c2114: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c2114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2118: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c211c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2120: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2124: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c2124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c2128:
    // 0x1c2128: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c2128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c212c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1c212cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2130: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2134: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C2134u;
    SET_GPR_U32(ctx, 31, 0x1C213Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C2134u, 0x1C213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C213Cu;
label_1c213c:
    // 0x1c213c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C213Cu;
    {
        const bool branch_taken_0x1c213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c213c) {
            ctx->pc = 0x1C216Cu;
            goto label_1c216c;
        }
    }
    ctx->pc = 0x1C2144u;
    // 0x1c2144: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1c2144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2148: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c214c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c214cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c2150: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c2154: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2158: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c2158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c215c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2160: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c2160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2164: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c2164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2168: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c2168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c216c:
    // 0x1c216c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2170: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x1c2170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x1c2174: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C2174u;
    {
        const bool branch_taken_0x1c2174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2174) {
            ctx->pc = 0x1C21DCu;
            goto label_1c21dc;
        }
    }
    ctx->pc = 0x1C217Cu;
    // 0x1c217c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2180: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c2180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c2184: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C2184u;
    {
        const bool branch_taken_0x1c2184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2184) {
            ctx->pc = 0x1C21DCu;
            goto label_1c21dc;
        }
    }
    ctx->pc = 0x1C218Cu;
    // 0x1c218c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2190: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c2190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c2194: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c2194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2198: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c219c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C219Cu;
    {
        const bool branch_taken_0x1c219c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c219c) {
            ctx->pc = 0x1C21DCu;
            goto label_1c21dc;
        }
    }
    ctx->pc = 0x1C21A4u;
    // 0x1c21a4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c21a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c21a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c21ac: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c21acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c21b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c21b8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c21b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c21bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c21c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c21c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c21c4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1c21c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c21c8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c21c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c21cc: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c21ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c21d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c21d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c21d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c21d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c21d8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c21dc:
    // 0x1c21dc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c21dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c21e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c21e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1c21e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c21e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C21E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21F0u;
}
