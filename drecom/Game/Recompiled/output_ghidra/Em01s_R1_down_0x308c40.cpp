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

// Function: Em01s_R1_down
// Address: 0x308c40 - 0x308dd8
void Em01s_R1_down_0x308c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_down_0x308c40");
#endif

    switch (ctx->pc) {
        case 0x308c94u: goto label_308c94;
        case 0x308cd8u: goto label_308cd8;
        case 0x308ce4u: goto label_308ce4;
        case 0x308d7cu: goto label_308d7c;
        case 0x308d88u: goto label_308d88;
        default: break;
    }

    ctx->pc = 0x308c40u;

    // 0x308c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308c44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x308c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x308c48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x308c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x308c4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c50: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x308c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308c54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x308c54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x308c58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308c5c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x308C5Cu;
    {
        const bool branch_taken_0x308c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x308c5c) {
            ctx->pc = 0x308CB8u;
            goto label_308cb8;
        }
    }
    ctx->pc = 0x308C64u;
    // 0x308c64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308C64u;
    {
        const bool branch_taken_0x308c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308c64) {
            ctx->pc = 0x308C74u;
            goto label_308c74;
        }
    }
    ctx->pc = 0x308C6Cu;
    // 0x308c6c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x308C6Cu;
    {
        const bool branch_taken_0x308c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308c6c) {
            ctx->pc = 0x308DC8u;
            goto label_308dc8;
        }
    }
    ctx->pc = 0x308C74u;
label_308c74:
    // 0x308c74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c78: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x308c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x308c80: 0x24062836  addiu       $a2, $zero, 0x2836
    ctx->pc = 0x308c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10294));
    // 0x308c84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x308c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308c88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x308c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x308c8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x308C8Cu;
    SET_GPR_U32(ctx, 31, 0x308C94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x308C8Cu, 0x308C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C94u;
label_308c94:
    // 0x308c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x308c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308c98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308c9c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x308c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x308ca0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ca4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x308ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x308ca8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308cac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x308cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308cb4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x308cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_308cb8:
    // 0x308cb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308cbc: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x308cbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x308cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308cc4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x308cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x308cc8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ccc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x308cccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x308cd0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x308CD0u;
    SET_GPR_U32(ctx, 31, 0x308CD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x308CD0u, 0x308CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CD8u;
label_308cd8:
    // 0x308cd8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308cdc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x308CDCu;
    SET_GPR_U32(ctx, 31, 0x308CE4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x308CDCu, 0x308CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CE4u;
label_308ce4:
    // 0x308ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ce8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x308ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x308cec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308cf0: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x308cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x308cf4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x308CF4u;
    {
        const bool branch_taken_0x308cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308cf4) {
            ctx->pc = 0x308D6Cu;
            goto label_308d6c;
        }
    }
    ctx->pc = 0x308CFCu;
    // 0x308cfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d00: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x308d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308d04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d08: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x308d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308d0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x308d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x308d10: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x308d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x308d14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d18: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x308d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x308d1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308d20: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x308d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x308d24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308D24u;
    {
        const bool branch_taken_0x308d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308d24) {
            ctx->pc = 0x308D50u;
            goto label_308d50;
        }
    }
    ctx->pc = 0x308D2Cu;
    // 0x308d2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d30: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x308d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308d34: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x308d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x308d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308d3c: 0x0  nop
    ctx->pc = 0x308d3cu;
    // NOP
    // 0x308d40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x308d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x308d44: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x308d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x308d48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x308D48u;
    {
        const bool branch_taken_0x308d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308d48) {
            ctx->pc = 0x308D6Cu;
            goto label_308d6c;
        }
    }
    ctx->pc = 0x308D50u;
label_308d50:
    // 0x308d50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d54: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x308d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308d58: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x308d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x308d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308d60: 0x0  nop
    ctx->pc = 0x308d60u;
    // NOP
    // 0x308d64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x308d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x308d68: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x308d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_308d6c:
    // 0x308d6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x308d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x308d74: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x308D74u;
    SET_GPR_U32(ctx, 31, 0x308D7Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x308D74u, 0x308D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D7Cu;
label_308d7c:
    // 0x308d7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d80: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x308D80u;
    SET_GPR_U32(ctx, 31, 0x308D88u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x308D80u, 0x308D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D88u;
label_308d88:
    // 0x308d88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d8c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x308d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x308d90: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x308D90u;
    {
        const bool branch_taken_0x308d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308d90) {
            ctx->pc = 0x308DC8u;
            goto label_308dc8;
        }
    }
    ctx->pc = 0x308D98u;
    // 0x308d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308d9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308da0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308da8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308dac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308db0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308db4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308db8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308dbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308dc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308dc4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_308dc8:
    // 0x308dc8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x308dc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308dcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x308dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x308dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x308DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308DD8u;
}
