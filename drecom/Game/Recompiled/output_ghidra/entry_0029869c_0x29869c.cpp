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

// Function: entry_0029869c
// Address: 0x29869c - 0x29878c
void entry_0029869c_0x29869c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029869c_0x29869c");
#endif

    switch (ctx->pc) {
        case 0x2986c4u: goto label_2986c4;
        case 0x2986f4u: goto label_2986f4;
        case 0x298778u: goto label_298778;
        default: break;
    }

    ctx->pc = 0x29869cu;

    // 0x29869c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x29869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2986a0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2986a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2986a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2986a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2986a8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2986a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2986ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2986acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2986b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2986b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2986b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2986b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2986b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2986b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2986bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2986BCu;
    SET_GPR_U32(ctx, 31, 0x2986C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2986BCu, 0x2986C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986C4u;
label_2986c4:
    // 0x2986c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2986c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2986c8: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x2986c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x2986cc: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2986CCu;
    {
        const bool branch_taken_0x2986cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2986cc) {
            ctx->pc = 0x29878Cu;
            return;
        }
    }
    ctx->pc = 0x2986D4u;
    // 0x2986d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2986d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2986d8: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x2986d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x2986dc: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2986DCu;
    {
        const bool branch_taken_0x2986dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2986dc) {
            ctx->pc = 0x29878Cu;
            return;
        }
    }
    ctx->pc = 0x2986E4u;
    // 0x2986e4: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x2986e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x2986e8: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x2986e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x2986ec: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2986ECu;
    SET_GPR_U32(ctx, 31, 0x2986F4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2986F4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2986F4u) { return; }
    ctx->pc = 0x2986F4u;
label_2986f4:
    // 0x2986f4: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x2986f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x2986f8: 0x24423500  addiu       $v0, $v0, 0x3500
    ctx->pc = 0x2986f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x2986fc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2986fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298700: 0xac223540  sw          $v0, 0x3540($at)
    ctx->pc = 0x298700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x813540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x813540u, _value); } while (0);
    // 0x298704: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298708: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x298708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x29870c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29870cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298710: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x298710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x298714: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x298714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
    // 0x298718: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x298718u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x813550u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x813550u, _value); } while (0);
    // 0x29871c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x29871cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298720: 0xc4213554  lwc1        $f1, 0x3554($at)
    ctx->pc = 0x298720u;
    { uint32_t bits = FAST_READ32(0x813554u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298724: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x298724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x298728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29872c: 0x0  nop
    ctx->pc = 0x29872cu;
    // NOP
    // 0x298730: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x298730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298734: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x298734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298738: 0xe4203554  swc1        $f0, 0x3554($at)
    ctx->pc = 0x298738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x813554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x813554u, _value); } while (0); }
    // 0x29873c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x29873cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x298740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298744: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x298744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298748: 0xe4203560  swc1        $f0, 0x3560($at)
    ctx->pc = 0x298748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x813560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x813560u, _value); } while (0); }
    // 0x29874c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x29874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298750: 0xa4203564  sh          $zero, 0x3564($at)
    ctx->pc = 0x298750u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x813564u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x813564u, _value); } while (0);
    // 0x298754: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x298754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298758: 0xa0203566  sb          $zero, 0x3566($at)
    ctx->pc = 0x298758u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x813566u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x813566u, _value); } while (0);
    // 0x29875c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x29875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x298760: 0xa0203567  sb          $zero, 0x3567($at)
    ctx->pc = 0x298760u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x813567u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x813567u, _value); } while (0);
    // 0x298764: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298768: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x298768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x29876c: 0x24453540  addiu       $a1, $v0, 0x3540
    ctx->pc = 0x29876cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
    // 0x298770: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x298770u;
    SET_GPR_U32(ctx, 31, 0x298778u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x298770u, 0x298778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298778u;
label_298778:
    // 0x298778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298778u;
    {
        const bool branch_taken_0x298778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298778) {
            ctx->pc = 0x29878Cu;
            return;
        }
    }
    ctx->pc = 0x298780u;
    // 0x298780: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x298780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x298784: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298788: 0xac641330  sw          $a0, 0x1330($v1)
    ctx->pc = 0x298788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 4));
    ctx->pc = 0x29878cu;
}
