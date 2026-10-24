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

// Function: Plw01_atk04_on
// Address: 0x1c0950 - 0x1c0c1c
void Plw01_atk04_on_0x1c0950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk04_on_0x1c0950");
#endif

    switch (ctx->pc) {
        case 0x1c09dcu: goto label_1c09dc;
        case 0x1c0a04u: goto label_1c0a04;
        case 0x1c0a44u: goto label_1c0a44;
        case 0x1c0a6cu: goto label_1c0a6c;
        case 0x1c0a8cu: goto label_1c0a8c;
        case 0x1c0aa4u: goto label_1c0aa4;
        case 0x1c0ab4u: goto label_1c0ab4;
        case 0x1c0ad4u: goto label_1c0ad4;
        case 0x1c0ae0u: goto label_1c0ae0;
        case 0x1c0af4u: goto label_1c0af4;
        case 0x1c0b00u: goto label_1c0b00;
        case 0x1c0b50u: goto label_1c0b50;
        default: break;
    }

    ctx->pc = 0x1c0950u;

    // 0x1c0950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c0954: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c0954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c0958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c095c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c095cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c0960: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c0960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c0964: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c0964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c0968: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c0968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c096c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c096cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c0970: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0974: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c0974u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c0978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c097c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c097cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0980: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c0980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0984: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0988: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C0988u;
    {
        const bool branch_taken_0x1c0988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0988) {
            ctx->pc = 0x1C0AC4u;
            goto label_1c0ac4;
        }
    }
    ctx->pc = 0x1C0990u;
    // 0x1c0990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0994: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C0994u;
    {
        const bool branch_taken_0x1c0994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c0994) {
            ctx->pc = 0x1C0A14u;
            goto label_1c0a14;
        }
    }
    ctx->pc = 0x1C099Cu;
    // 0x1c099c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C099Cu;
    {
        const bool branch_taken_0x1c099c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c099c) {
            ctx->pc = 0x1C09ACu;
            goto label_1c09ac;
        }
    }
    ctx->pc = 0x1C09A4u;
    // 0x1c09a4: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1C09A4u;
    {
        const bool branch_taken_0x1c09a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09a4) {
            ctx->pc = 0x1C0C08u;
            goto label_1c0c08;
        }
    }
    ctx->pc = 0x1C09ACu;
label_1c09ac:
    // 0x1c09ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c09acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c09b0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c09b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C09B4u;
    {
        const bool branch_taken_0x1c09b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09b4) {
            ctx->pc = 0x1C09E4u;
            goto label_1c09e4;
        }
    }
    ctx->pc = 0x1C09BCu;
    // 0x1c09bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c09c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c09c4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c09c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c09c8: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c09c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c09cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c09ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c09d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c09d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c09d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C09D4u;
    SET_GPR_U32(ctx, 31, 0x1C09DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C09D4u, 0x1C09DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09DCu;
label_1c09dc:
    // 0x1c09dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C09DCu;
    {
        const bool branch_taken_0x1c09dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09dc) {
            ctx->pc = 0x1C0A04u;
            goto label_1c0a04;
        }
    }
    ctx->pc = 0x1C09E4u;
label_1c09e4:
    // 0x1c09e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c09e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c09e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c09e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c09ec: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c09ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c09f0: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x1c09f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
    // 0x1c09f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c09f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c09f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c09f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c09fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C09FCu;
    SET_GPR_U32(ctx, 31, 0x1C0A04u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C09FCu, 0x1C0A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A04u;
label_1c0a04:
    // 0x1c0a04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a08: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0a0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0a10: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c0a14:
    // 0x1c0a14: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c0a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0a18: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c0a1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0A1Cu;
    {
        const bool branch_taken_0x1c0a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a1c) {
            ctx->pc = 0x1C0A4Cu;
            goto label_1c0a4c;
        }
    }
    ctx->pc = 0x1C0A24u;
    // 0x1c0a24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a2c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0a30: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c0a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c0a34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0a38: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0a3c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0A44u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0A3Cu, 0x1C0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A44u;
label_1c0a44:
    // 0x1c0a44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0A44u;
    {
        const bool branch_taken_0x1c0a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a44) {
            ctx->pc = 0x1C0A6Cu;
            goto label_1c0a6c;
        }
    }
    ctx->pc = 0x1C0A4Cu;
label_1c0a4c:
    // 0x1c0a4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a54: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0a58: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x1c0a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
    // 0x1c0a5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c0a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0a60: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0a64: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C0A64u;
    SET_GPR_U32(ctx, 31, 0x1C0A6Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C0A64u, 0x1C0A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A6Cu;
label_1c0a6c:
    // 0x1c0a6c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c0a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0a70: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c0a70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c0a74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a78: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c0a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0a7c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1c0a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c0a80: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x1c0a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c0a84: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C0A84u;
    SET_GPR_U32(ctx, 31, 0x1C0A8Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C0A84u, 0x1C0A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A8Cu;
label_1c0a8c:
    // 0x1c0a8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0a94: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c0a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0a98: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c0a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c0a9c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C0A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0AA4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C0A9Cu, 0x1C0AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AA4u;
label_1c0aa4:
    // 0x1c0aa4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c0aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c0aa8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c0aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0aac: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C0AACu;
    SET_GPR_U32(ctx, 31, 0x1C0AB4u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C0AACu, 0x1C0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AB4u;
label_1c0ab4:
    // 0x1c0ab4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ab8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c0ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c0abc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0ac0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c0ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c0ac4:
    // 0x1c0ac4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0ac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0acc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0ACCu;
    SET_GPR_U32(ctx, 31, 0x1C0AD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0ACCu, 0x1C0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AD4u;
label_1c0ad4:
    // 0x1c0ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ad8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0AD8u;
    SET_GPR_U32(ctx, 31, 0x1C0AE0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0AD8u, 0x1C0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AE0u;
label_1c0ae0:
    // 0x1c0ae0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0ae4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ae8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0ae8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0aec: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C0AECu;
    SET_GPR_U32(ctx, 31, 0x1C0AF4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C0AECu, 0x1C0AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AF4u;
label_1c0af4:
    // 0x1c0af4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0af8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C0AF8u;
    SET_GPR_U32(ctx, 31, 0x1C0B00u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C0AF8u, 0x1C0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B00u;
label_1c0b00:
    // 0x1c0b00: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c0b04: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c0b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c0b08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0B08u;
    {
        const bool branch_taken_0x1c0b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b08) {
            ctx->pc = 0x1C0B3Cu;
            goto label_1c0b3c;
        }
    }
    ctx->pc = 0x1C0B10u;
    // 0x1c0b10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b14: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c0b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0b18: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c0b1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c0b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c0b20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0B20u;
    {
        const bool branch_taken_0x1c0b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b20) {
            ctx->pc = 0x1C0B3Cu;
            goto label_1c0b3c;
        }
    }
    ctx->pc = 0x1C0B28u;
    // 0x1c0b28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b2c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c0b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c0b30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c0b34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c0b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0b38: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c0b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c0b3c:
    // 0x1c0b3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b44: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0b48: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C0B48u;
    SET_GPR_U32(ctx, 31, 0x1C0B50u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C0B48u, 0x1C0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B50u;
label_1c0b50:
    // 0x1c0b50: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0B50u;
    {
        const bool branch_taken_0x1c0b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b50) {
            ctx->pc = 0x1C0B84u;
            goto label_1c0b84;
        }
    }
    ctx->pc = 0x1C0B58u;
    // 0x1c0b58: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c0b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b5c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c0b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c0b60: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c0b64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c0b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c0b68: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0b6c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c0b70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b74: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c0b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0b78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0b7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b80: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c0b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c0b84:
    // 0x1c0b84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b88: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c0b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c0b8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c0b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0b90: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1c0b90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0b94: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C0B94u;
    {
        const bool branch_taken_0x1c0b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b94) {
            ctx->pc = 0x1C0C08u;
            goto label_1c0c08;
        }
    }
    ctx->pc = 0x1C0B9Cu;
    // 0x1c0b9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ba0: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c0ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c0ba4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C0BA4u;
    {
        const bool branch_taken_0x1c0ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ba4) {
            ctx->pc = 0x1C0C08u;
            goto label_1c0c08;
        }
    }
    ctx->pc = 0x1C0BACu;
    // 0x1c0bac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bb0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c0bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c0bb4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c0bb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0bbc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C0BBCu;
    {
        const bool branch_taken_0x1c0bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0bbc) {
            ctx->pc = 0x1C0C08u;
            goto label_1c0c08;
        }
    }
    ctx->pc = 0x1C0BC4u;
    // 0x1c0bc4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c0bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0bc8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bcc: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c0bccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c0bd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c0bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0bd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bd8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0bdc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0be0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0be4: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c0be4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c0be8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c0becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0bf0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0bf4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c0bf8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c0bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c0bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c0c00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0c04: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c0c08:
    // 0x1c0c08: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c0c08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0c0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0c10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c0c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c0c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0C1Cu;
}
