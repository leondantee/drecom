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

// Function: entry_001dcfdc
// Address: 0x1dcfdc - 0x1dd284
void entry_001dcfdc_0x1dcfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcfdc_0x1dcfdc");
#endif

    switch (ctx->pc) {
        case 0x1dd078u: goto label_1dd078;
        case 0x1dd094u: goto label_1dd094;
        case 0x1dd0b0u: goto label_1dd0b0;
        case 0x1dd188u: goto label_1dd188;
        case 0x1dd19cu: goto label_1dd19c;
        case 0x1dd1ccu: goto label_1dd1cc;
        case 0x1dd1e0u: goto label_1dd1e0;
        case 0x1dd210u: goto label_1dd210;
        case 0x1dd22cu: goto label_1dd22c;
        default: break;
    }

    ctx->pc = 0x1dcfdcu;

    // 0x1dcfdc: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x1dcfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x1dcfe0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1dcfe0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dcfe4: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x1dcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dcfe8: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x1dcfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1dcfec: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1dcff0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dcff4: 0x2450bd00  addiu       $s0, $v0, -0x4300
    ctx->pc = 0x1dcff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dcff8: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1dcff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1dcffc: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x1dcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd000: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd004: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1dd004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd008: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd008u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd00c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd010: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd014: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd018: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd01c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd024: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dd024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd028: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dd028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd02c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1dd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd030: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1dd030u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1dd034: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1dd034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd038: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1dd038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1dd03c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd03cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd040: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd044: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd048: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd04c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd050: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dd050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd054: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd058: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1dd058u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1dd05c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd060: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd064: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1dd064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd068: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd06c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1dd06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dd070: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD070u;
    SET_GPR_U32(ctx, 31, 0x1DD078u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD078u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD078u) { return; }
    ctx->pc = 0x1DD078u;
label_1dd078:
    // 0x1dd078: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd07c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd080: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1dd080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd084: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd088: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1dd088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dd08c: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD08Cu;
    SET_GPR_U32(ctx, 31, 0x1DD094u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD094u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD094u) { return; }
    ctx->pc = 0x1DD094u;
label_1dd094:
    // 0x1dd094: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd098: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd09c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1dd09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd0a0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dd0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd0a4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1dd0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dd0a8: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DD0A8u;
    SET_GPR_U32(ctx, 31, 0x1DD0B0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DD0B0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD0B0u) { return; }
    ctx->pc = 0x1DD0B0u;
label_1dd0b0:
    // 0x1dd0b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd0b8: 0x0  nop
    ctx->pc = 0x1dd0b8u;
    // NOP
    // 0x1dd0bc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dd0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1dd0c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1dd0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd0c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1dd0c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd0c8: 0x0  nop
    ctx->pc = 0x1dd0c8u;
    // NOP
    // 0x1dd0cc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1dd0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1dd0d0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1dd0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd0d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1dd0d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd0d8: 0x0  nop
    ctx->pc = 0x1dd0d8u;
    // NOP
    // 0x1dd0dc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1dd0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1dd0e0: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x1dd0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dd0e4: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x1dd0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1dd0e8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd0ec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd0f0: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x1dd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd0f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd0f8: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x1dd0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dd0fc: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x1dd0fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd100: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1dd100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd104: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1dd104u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1dd108: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd10c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd110: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd114: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd118: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd11c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd120: 0x24850070  addiu       $a1, $a0, 0x70
    ctx->pc = 0x1dd120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1dd124: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x1dd124u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd128: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1dd128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd12c: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x1dd12cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1dd130: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1dd130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd134: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1dd134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1dd138: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd13c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd140: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd144: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd148: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x1dd148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1dd14c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd14cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd150: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1dd150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd154: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd154u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd158: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd15c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1dd15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd160: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1dd160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1dd164: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1dd164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1dd168: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd16c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd170: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x1dd170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd174: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd178: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x1dd178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1dd17c: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x1dd17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd180: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD180u;
    SET_GPR_U32(ctx, 31, 0x1DD188u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD180u, 0x1DD188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD188u;
label_1dd188:
    // 0x1dd188: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dd188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd18c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dd18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dd190: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dd190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd194: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD194u;
    SET_GPR_U32(ctx, 31, 0x1DD19Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD19Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD19Cu) { return; }
    ctx->pc = 0x1DD19Cu;
label_1dd19c:
    // 0x1dd19c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd1a0: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1dd1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd1a4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dd1a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1dd1ac: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dd1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd1b0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd1b4: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1dd1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd1b8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1dd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd1bc: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x1dd1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1dd1c0: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd1c4: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD1C4u;
    SET_GPR_U32(ctx, 31, 0x1DD1CCu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD1C4u, 0x1DD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1CCu;
label_1dd1cc:
    // 0x1dd1cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1dd1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd1d0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dd1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dd1d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dd1d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd1d8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD1D8u;
    SET_GPR_U32(ctx, 31, 0x1DD1E0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD1E0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD1E0u) { return; }
    ctx->pc = 0x1DD1E0u;
label_1dd1e0:
    // 0x1dd1e0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd1e4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x1dd1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd1e8: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x1dd1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1dd1ec: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x1dd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x1dd1f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd1f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd1f8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd200: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1dd204: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x1dd204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dd208: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD208u;
    SET_GPR_U32(ctx, 31, 0x1DD210u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD208u, 0x1DD210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD210u;
label_1dd210:
    // 0x1dd210: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1dd210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd214: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1dd214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1dd218: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1dd218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1dd21c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1dd21cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1dd220: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dd220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1dd224: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1DD224u;
    SET_GPR_U32(ctx, 31, 0x1DD22Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1DD22Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DD22Cu) { return; }
    ctx->pc = 0x1DD22Cu;
label_1dd22c:
    // 0x1dd22c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dd230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd234: 0x0  nop
    ctx->pc = 0x1dd234u;
    // NOP
    // 0x1dd238: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dd238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dd23c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1dd23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd240: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1dd240u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd244: 0x0  nop
    ctx->pc = 0x1dd244u;
    // NOP
    // 0x1dd248: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dd248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dd24c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1dd24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd250: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1dd250u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd254: 0x0  nop
    ctx->pc = 0x1dd254u;
    // NOP
    // 0x1dd258: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dd258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1dd25c: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x1dd25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd260: 0x90c70013  lbu         $a3, 0x13($a2)
    ctx->pc = 0x1dd260u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 19)));
    // 0x1dd264: 0x30f200ff  andi        $s2, $a3, 0xFF
    ctx->pc = 0x1dd264u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1dd268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd26c: 0x0  nop
    ctx->pc = 0x1dd26cu;
    // NOP
    // 0x1dd270: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd274: 0x24080037  addiu       $t0, $zero, 0x37
    ctx->pc = 0x1dd274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dd278: 0x3110ffff  andi        $s0, $t0, 0xFFFF
    ctx->pc = 0x1dd278u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1dd27c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1DD27Cu;
    {
        const bool branch_taken_0x1dd27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd27c) {
            ctx->pc = 0x1DD358u;
            return;
        }
    }
    ctx->pc = 0x1DD284u;
}
