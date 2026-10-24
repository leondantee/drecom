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

// Function: Plw03_atk04_off
// Address: 0x1c5c40 - 0x1c5ea4
void Plw03_atk04_off_0x1c5c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk04_off_0x1c5c40");
#endif

    switch (ctx->pc) {
        case 0x1c5cccu: goto label_1c5ccc;
        case 0x1c5cf4u: goto label_1c5cf4;
        case 0x1c5d34u: goto label_1c5d34;
        case 0x1c5d5cu: goto label_1c5d5c;
        case 0x1c5d7cu: goto label_1c5d7c;
        case 0x1c5d8cu: goto label_1c5d8c;
        case 0x1c5dacu: goto label_1c5dac;
        case 0x1c5db8u: goto label_1c5db8;
        case 0x1c5dccu: goto label_1c5dcc;
        case 0x1c5dd8u: goto label_1c5dd8;
        case 0x1c5decu: goto label_1c5dec;
        default: break;
    }

    ctx->pc = 0x1c5c40u;

    // 0x1c5c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c5c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c5c44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c5c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c5c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5c4c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c5c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c5c50: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c5c54: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c5c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c5c58: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c5c5c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c5c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c5c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5c64: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c5c64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c5c68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5c6c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c5c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5c70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c5c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5c74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5c78: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C5C78u;
    {
        const bool branch_taken_0x1c5c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5c78) {
            ctx->pc = 0x1C5D9Cu;
            goto label_1c5d9c;
        }
    }
    ctx->pc = 0x1C5C80u;
    // 0x1c5c80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5c84: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C5C84u;
    {
        const bool branch_taken_0x1c5c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5c84) {
            ctx->pc = 0x1C5D04u;
            goto label_1c5d04;
        }
    }
    ctx->pc = 0x1C5C8Cu;
    // 0x1c5c8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5C8Cu;
    {
        const bool branch_taken_0x1c5c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c8c) {
            ctx->pc = 0x1C5C9Cu;
            goto label_1c5c9c;
        }
    }
    ctx->pc = 0x1C5C94u;
    // 0x1c5c94: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1C5C94u;
    {
        const bool branch_taken_0x1c5c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c94) {
            ctx->pc = 0x1C5E90u;
            goto label_1c5e90;
        }
    }
    ctx->pc = 0x1C5C9Cu;
label_1c5c9c:
    // 0x1c5c9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5ca0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c5ca4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5CA4u;
    {
        const bool branch_taken_0x1c5ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ca4) {
            ctx->pc = 0x1C5CD4u;
            goto label_1c5cd4;
        }
    }
    ctx->pc = 0x1C5CACu;
    // 0x1c5cac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5cb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5cb4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5cb8: 0x2406141f  addiu       $a2, $zero, 0x141F
    ctx->pc = 0x1c5cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5151));
    // 0x1c5cbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5cc0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5cc4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C5CC4u;
    SET_GPR_U32(ctx, 31, 0x1C5CCCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C5CC4u, 0x1C5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CCCu;
label_1c5ccc:
    // 0x1c5ccc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5CCCu;
    {
        const bool branch_taken_0x1c5ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5ccc) {
            ctx->pc = 0x1C5CF4u;
            goto label_1c5cf4;
        }
    }
    ctx->pc = 0x1C5CD4u;
label_1c5cd4:
    // 0x1c5cd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5cd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5cdc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5ce0: 0x24060a1f  addiu       $a2, $zero, 0xA1F
    ctx->pc = 0x1c5ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2591));
    // 0x1c5ce4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5ce8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5cec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C5CECu;
    SET_GPR_U32(ctx, 31, 0x1C5CF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C5CECu, 0x1C5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5CF4u;
label_1c5cf4:
    // 0x1c5cf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5cf8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5d00: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c5d04:
    // 0x1c5d04: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5d08: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c5d0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5D0Cu;
    {
        const bool branch_taken_0x1c5d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d0c) {
            ctx->pc = 0x1C5D3Cu;
            goto label_1c5d3c;
        }
    }
    ctx->pc = 0x1C5D14u;
    // 0x1c5d14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d1c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5d20: 0x2406141e  addiu       $a2, $zero, 0x141E
    ctx->pc = 0x1c5d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5150));
    // 0x1c5d24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5d28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5d2c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D34u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5D2Cu, 0x1C5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D34u;
label_1c5d34:
    // 0x1c5d34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5D34u;
    {
        const bool branch_taken_0x1c5d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d34) {
            ctx->pc = 0x1C5D5Cu;
            goto label_1c5d5c;
        }
    }
    ctx->pc = 0x1C5D3Cu;
label_1c5d3c:
    // 0x1c5d3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d44: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5d48: 0x24060a1e  addiu       $a2, $zero, 0xA1E
    ctx->pc = 0x1c5d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2590));
    // 0x1c5d4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5d50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5d54: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5D54u;
    SET_GPR_U32(ctx, 31, 0x1C5D5Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5D54u, 0x1C5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D5Cu;
label_1c5d5c:
    // 0x1c5d5c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c5d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5d60: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c5d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c5d64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d6c: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c5d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5d70: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c5d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c5d74: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C5D74u;
    SET_GPR_U32(ctx, 31, 0x1C5D7Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C5D74u, 0x1C5D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D7Cu;
label_1c5d7c:
    // 0x1c5d7c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c5d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c5d80: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c5d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5d84: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C5D84u;
    SET_GPR_U32(ctx, 31, 0x1C5D8Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C5D84u, 0x1C5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D8Cu;
label_1c5d8c:
    // 0x1c5d8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5d90: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5d94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5d98: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c5d9c:
    // 0x1c5d9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5da0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5da0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5da4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C5DA4u;
    SET_GPR_U32(ctx, 31, 0x1C5DACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C5DA4u, 0x1C5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DACu;
label_1c5dac:
    // 0x1c5dac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5db0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5DB0u;
    SET_GPR_U32(ctx, 31, 0x1C5DB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5DB0u, 0x1C5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DB8u;
label_1c5db8:
    // 0x1c5db8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5dbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5dc0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5dc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5dc4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C5DC4u;
    SET_GPR_U32(ctx, 31, 0x1C5DCCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C5DC4u, 0x1C5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DCCu;
label_1c5dcc:
    // 0x1c5dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5dd0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5DD0u;
    SET_GPR_U32(ctx, 31, 0x1C5DD8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5DD0u, 0x1C5DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DD8u;
label_1c5dd8:
    // 0x1c5dd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5ddc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5de0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5de4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C5DE4u;
    SET_GPR_U32(ctx, 31, 0x1C5DECu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C5DE4u, 0x1C5DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DECu;
label_1c5dec:
    // 0x1c5dec: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C5DECu;
    {
        const bool branch_taken_0x1c5dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5dec) {
            ctx->pc = 0x1C5E78u;
            goto label_1c5e78;
        }
    }
    ctx->pc = 0x1C5DF4u;
    // 0x1c5df4: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1c5df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c5df8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c5df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c5dfc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C5DFCu;
    {
        const bool branch_taken_0x1c5dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5dfc) {
            ctx->pc = 0x1C5E48u;
            goto label_1c5e48;
        }
    }
    ctx->pc = 0x1C5E04u;
    // 0x1c5e04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c5e0c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c5e10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5e14: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5E14u;
    {
        const bool branch_taken_0x1c5e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e14) {
            ctx->pc = 0x1C5E48u;
            goto label_1c5e48;
        }
    }
    ctx->pc = 0x1C5E1Cu;
    // 0x1c5e1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c5e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e20: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c5e24: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5e28: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c5e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c5e2c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c5e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c5e30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5e34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e38: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c5e3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5e40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e44: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c5e44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c5e48:
    // 0x1c5e48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e4c: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c5e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c5e50: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C5E50u;
    {
        const bool branch_taken_0x1c5e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e50) {
            ctx->pc = 0x1C5E90u;
            goto label_1c5e90;
        }
    }
    ctx->pc = 0x1C5E58u;
    // 0x1c5e58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5e5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e60: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5e60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c5e64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5e68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e6c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c5e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c5e70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5E70u;
    {
        const bool branch_taken_0x1c5e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e70) {
            ctx->pc = 0x1C5E90u;
            goto label_1c5e90;
        }
    }
    ctx->pc = 0x1C5E78u;
label_1c5e78:
    // 0x1c5e78: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c5e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5e7c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c5e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c5e80: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c5e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c5e84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c5e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c5e88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5e8c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c5e90:
    // 0x1c5e90: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c5e90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5e98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c5e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c5e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5EA4u;
}
