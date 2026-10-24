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

// Function: Em10_wep_move_reflect
// Address: 0x135cb0 - 0x13601c
void Em10_wep_move_reflect_0x135cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_wep_move_reflect_0x135cb0");
#endif

    switch (ctx->pc) {
        case 0x135cecu: goto label_135cec;
        case 0x135d08u: goto label_135d08;
        case 0x135d24u: goto label_135d24;
        case 0x135d78u: goto label_135d78;
        case 0x135dacu: goto label_135dac;
        case 0x135e08u: goto label_135e08;
        case 0x135e60u: goto label_135e60;
        case 0x135e84u: goto label_135e84;
        case 0x135e90u: goto label_135e90;
        case 0x135ec8u: goto label_135ec8;
        case 0x135f10u: goto label_135f10;
        default: break;
    }

    ctx->pc = 0x135cb0u;

    // 0x135cb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x135cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x135cb4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x135cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x135cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x135cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x135cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135cc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135cc4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x135cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x135cc8: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x135cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x135ccc: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x135cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x135cd0: 0xafa700b8  sw          $a3, 0xB8($sp)
    ctx->pc = 0x135cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 7));
    // 0x135cd4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x135cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135cd8: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x135cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x135cdc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x135cdcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135ce0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135ce4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x135CE4u;
    SET_GPR_U32(ctx, 31, 0x135CECu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x135CECu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135CECu) { return; }
    ctx->pc = 0x135CECu;
label_135cec:
    // 0x135cec: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x135cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x135cf0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x135cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x135cf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135cf8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135cfc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x135cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135d00: 0xc040d0e  jal         func_103438
    ctx->pc = 0x135D00u;
    SET_GPR_U32(ctx, 31, 0x135D08u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x135D08u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135D08u) { return; }
    ctx->pc = 0x135D08u;
label_135d08:
    // 0x135d08: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x135d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x135d0c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x135d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x135d10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135d14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135d18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x135d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135d1c: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x135D1Cu;
    SET_GPR_U32(ctx, 31, 0x135D24u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x135D24u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135D24u) { return; }
    ctx->pc = 0x135D24u;
label_135d24:
    // 0x135d24: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x135d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135d28: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x135d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x135d2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135d30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135d34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135d38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135d3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135d40: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135d44: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x135d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135d48: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x135d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135d4c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x135d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x135d50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135d54: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135d58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135d5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135d60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135d64: 0x8ca202d0  lw          $v0, 0x2D0($a1)
    ctx->pc = 0x135d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x135d68: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x135d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135d6c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x135d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135d70: 0xc040c00  jal         func_103000
    ctx->pc = 0x135D70u;
    SET_GPR_U32(ctx, 31, 0x135D78u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x135D78u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135D78u) { return; }
    ctx->pc = 0x135D78u;
label_135d78:
    // 0x135d78: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x135d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135d7c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x135d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x135d80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135d84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135d88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135d8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135d90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135d94: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135d9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x135d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x135da0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x135da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135da4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x135DA4u;
    SET_GPR_U32(ctx, 31, 0x135DACu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x135DACu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135DACu) { return; }
    ctx->pc = 0x135DACu;
label_135dac:
    // 0x135dac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x135dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135db0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x135db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x135db4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135db8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135dbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135dc0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135dc4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135dc8: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135dcc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x135dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135dd0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x135dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135dd4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x135dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x135dd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135ddc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135de0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135de4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135de8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135dec: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135df4: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x135df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x135df8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x135df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135dfc: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x135dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x135e00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x135E00u;
    SET_GPR_U32(ctx, 31, 0x135E08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x135E00u, 0x135E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E08u;
label_135e08:
    // 0x135e08: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x135e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x135e0c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x135e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135e10: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x135e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x135e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135e18: 0x0  nop
    ctx->pc = 0x135e18u;
    // NOP
    // 0x135e1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x135e1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135e20: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x135e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x135e24: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x135e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135e28: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x135e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x135e2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135e30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135e34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135e38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135e3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135e40: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135e44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135e48: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x135e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135e4c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x135e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x135e50: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x135e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135e54: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x135e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x135e58: 0xc059e1c  jal         func_167870
    ctx->pc = 0x135E58u;
    SET_GPR_U32(ctx, 31, 0x135E60u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x135E58u, 0x135E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E60u;
label_135e60:
    // 0x135e60: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x135e60u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x135e64: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x135E64u;
    {
        const bool branch_taken_0x135e64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x135e64) {
            ctx->pc = 0x135F24u;
            goto label_135f24;
        }
    }
    ctx->pc = 0x135E6Cu;
    // 0x135e6c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x135e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x135e70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x135e70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135e74: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x135e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135e78: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x135e78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135e7c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x135E7Cu;
    SET_GPR_U32(ctx, 31, 0x135E84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x135E7Cu, 0x135E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E84u;
label_135e84:
    // 0x135e84: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x135e84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x135e88: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x135E88u;
    SET_GPR_U32(ctx, 31, 0x135E90u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x135E88u, 0x135E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E90u;
label_135e90:
    // 0x135e90: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x135e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135e94: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x135e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x135e98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x135E98u;
    {
        const bool branch_taken_0x135e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135e98) {
            ctx->pc = 0x135EE8u;
            goto label_135ee8;
        }
    }
    ctx->pc = 0x135EA0u;
    // 0x135ea0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x135ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x135ea4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x135ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x135ea8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135eac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x135eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135eb0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x135eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135eb4: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x135eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x135eb8: 0x244505b0  addiu       $a1, $v0, 0x5B0
    ctx->pc = 0x135eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x135ebc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135ebcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135ec0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x135EC0u;
    SET_GPR_U32(ctx, 31, 0x135EC8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x135EC0u, 0x135EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135EC8u;
label_135ec8:
    // 0x135ec8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x135ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135ecc: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135ed0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x135ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x135ed4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135ed8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135edc: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x135edcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x135ee0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x135EE0u;
    {
        const bool branch_taken_0x135ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135ee0) {
            ctx->pc = 0x135F24u;
            goto label_135f24;
        }
    }
    ctx->pc = 0x135EE8u;
label_135ee8:
    // 0x135ee8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x135ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135eec: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x135eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x135ef0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x135ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x135ef4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x135ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x135ef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x135ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135efc: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x135efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x135f00: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x135f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x135f04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x135f04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x135f08: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x135F08u;
    SET_GPR_U32(ctx, 31, 0x135F10u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x135F08u, 0x135F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F10u;
label_135f10:
    // 0x135f10: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x135f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135f14: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x135f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x135f18: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x135f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x135f1c: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x135f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x135f20: 0xac83121c  sw          $v1, 0x121C($a0)
    ctx->pc = 0x135f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 3));
label_135f24:
    // 0x135f24: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x135f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x135f28: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x135F28u;
    {
        const bool branch_taken_0x135f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f28) {
            ctx->pc = 0x135F74u;
            goto label_135f74;
        }
    }
    ctx->pc = 0x135F30u;
    // 0x135f30: 0x86030086  lh          $v1, 0x86($s0)
    ctx->pc = 0x135f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x135f34: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135F34u;
    {
        const bool branch_taken_0x135f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f34) {
            ctx->pc = 0x135F50u;
            goto label_135f50;
        }
    }
    ctx->pc = 0x135F3Cu;
    // 0x135f3c: 0x86030086  lh          $v1, 0x86($s0)
    ctx->pc = 0x135f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x135f40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135f44: 0xa6030086  sh          $v1, 0x86($s0)
    ctx->pc = 0x135f44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 3));
    // 0x135f48: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x135F48u;
    {
        const bool branch_taken_0x135f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f48) {
            ctx->pc = 0x135FACu;
            goto label_135fac;
        }
    }
    ctx->pc = 0x135F50u;
label_135f50:
    // 0x135f50: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x135f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135f54: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x135f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135f58: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135f5c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x135f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x135f60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135f64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135f68: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x135f68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x135f6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x135F6Cu;
    {
        const bool branch_taken_0x135f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f6c) {
            ctx->pc = 0x135FACu;
            goto label_135fac;
        }
    }
    ctx->pc = 0x135F74u;
label_135f74:
    // 0x135f74: 0x86030088  lh          $v1, 0x88($s0)
    ctx->pc = 0x135f74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x135f78: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135F78u;
    {
        const bool branch_taken_0x135f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f78) {
            ctx->pc = 0x135F94u;
            goto label_135f94;
        }
    }
    ctx->pc = 0x135F80u;
    // 0x135f80: 0x86030088  lh          $v1, 0x88($s0)
    ctx->pc = 0x135f80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x135f84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135f88: 0xa6030088  sh          $v1, 0x88($s0)
    ctx->pc = 0x135f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x135f8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135F8Cu;
    {
        const bool branch_taken_0x135f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f8c) {
            ctx->pc = 0x135FACu;
            goto label_135fac;
        }
    }
    ctx->pc = 0x135F94u;
label_135f94:
    // 0x135f94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x135f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135f98: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x135f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135f9c: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x135f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x135fa0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x135fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x135fa4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x135fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x135fa8: 0xac83121c  sw          $v1, 0x121C($a0)
    ctx->pc = 0x135fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 3));
label_135fac:
    // 0x135fac: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x135FACu;
    {
        const bool branch_taken_0x135fac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fac) {
            ctx->pc = 0x136000u;
            goto label_136000;
        }
    }
    ctx->pc = 0x135FB4u;
    // 0x135fb4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x135fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x135fb8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x135FB8u;
    {
        const bool branch_taken_0x135fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fb8) {
            ctx->pc = 0x135FE4u;
            goto label_135fe4;
        }
    }
    ctx->pc = 0x135FC0u;
    // 0x135fc0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x135fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135fc4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x135fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x135fc8: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x135fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x135fcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135fd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135fd4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x135fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x135fd8: 0xa2000097  sb          $zero, 0x97($s0)
    ctx->pc = 0x135fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x135fdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135FDCu;
    {
        const bool branch_taken_0x135fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fdc) {
            ctx->pc = 0x136000u;
            goto label_136000;
        }
    }
    ctx->pc = 0x135FE4u;
label_135fe4:
    // 0x135fe4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x135fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135fe8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x135fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x135fec: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x135fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x135ff0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x135ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x135ff4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x135ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x135ff8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x135ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x135ffc: 0xa2000098  sb          $zero, 0x98($s0)
    ctx->pc = 0x135ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 0));
label_136000:
    // 0x136000: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x136000u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136004: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13600c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13600cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136010: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x136010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x136014: 0x3e00008  jr          $ra
    ctx->pc = 0x136014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13601Cu;
}
