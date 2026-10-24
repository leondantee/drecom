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

// Function: entry_00170ce0
// Address: 0x170ce0 - 0x170f38
void entry_00170ce0_0x170ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170ce0_0x170ce0");
#endif

    switch (ctx->pc) {
        case 0x170d84u: goto label_170d84;
        case 0x170dacu: goto label_170dac;
        case 0x170dd0u: goto label_170dd0;
        case 0x170e90u: goto label_170e90;
        case 0x170ea4u: goto label_170ea4;
        case 0x170eb8u: goto label_170eb8;
        case 0x170f04u: goto label_170f04;
        case 0x170f34u: goto label_170f34;
        default: break;
    }

    ctx->pc = 0x170ce0u;

    // 0x170ce0: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x170ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x170ce4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x170ce4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170ce8: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x170ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x170cec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x170cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170cf0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170cf4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170cf8: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170cfc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x170cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170d00: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x170d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170d04: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170d04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170d08: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x170d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170d0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170d10: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x170d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x170d14: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x170d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x170d18: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170d1c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170d20: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170d24: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x170d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170d28: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x170d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170d2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170d2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170d30: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x170d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170d34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170d34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170d38: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x170d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x170d3c: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x170d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x170d40: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170d44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170d48: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170d4c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x170d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170d50: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x170d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170d54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170d54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170d58: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x170d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170d5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170d60: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170d64: 0x161980  sll         $v1, $s6, 6
    ctx->pc = 0x170d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x170d68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x170d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170d6c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x170d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170d70: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x170d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170d74: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x170d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x170d78: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170d7c: 0xc040c80  jal         func_103200
    ctx->pc = 0x170D7Cu;
    SET_GPR_U32(ctx, 31, 0x170D84u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170D84u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170D84u) { return; }
    ctx->pc = 0x170D84u;
label_170d84:
    // 0x170d84: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x170d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170d88: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x170d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x170d8c: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x170d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x170d90: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x170d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x170d94: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x170d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170d98: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x170d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x170d9c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x170d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170da0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x170da0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170da4: 0xc040c80  jal         func_103200
    ctx->pc = 0x170DA4u;
    SET_GPR_U32(ctx, 31, 0x170DACu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170DACu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170DACu) { return; }
    ctx->pc = 0x170DACu;
label_170dac:
    // 0x170dac: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x170dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170db0: 0x161980  sll         $v1, $s6, 6
    ctx->pc = 0x170db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x170db4: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x170db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x170db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170dbc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x170dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170dc0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x170dc4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x170dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170dc8: 0xc040c80  jal         func_103200
    ctx->pc = 0x170DC8u;
    SET_GPR_U32(ctx, 31, 0x170DD0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x170DD0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170DD0u) { return; }
    ctx->pc = 0x170DD0u;
label_170dd0:
    // 0x170dd0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x170dd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170dd4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x170dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x170dd8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x170dd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ddc: 0x0  nop
    ctx->pc = 0x170ddcu;
    // NOP
    // 0x170de0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x170de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x170de4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x170de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x170de8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x170de8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170dec: 0x0  nop
    ctx->pc = 0x170decu;
    // NOP
    // 0x170df0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x170df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x170df4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x170df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x170df8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x170df8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170dfc: 0x0  nop
    ctx->pc = 0x170dfcu;
    // NOP
    // 0x170e00: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x170e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x170e04: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x170e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x170e08: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x170e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170e0c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x170e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170e10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170e14: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170e18: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x170e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170e1c: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x170e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x170e20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170e24: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x170e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170e28: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170e28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170e2c: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x170e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x170e30: 0x912821  addu        $a1, $a0, $s1
    ctx->pc = 0x170e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x170e34: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x170e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x170e38: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x170e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x170e3c: 0x24a2bd00  addiu       $v0, $a1, -0x4300
    ctx->pc = 0x170e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x170e40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x170e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170e44: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x170e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x170e48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170e48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170e4c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x170e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170e50: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170e50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170e54: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x170e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x170e58: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x170e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x170e5c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x170e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x170e60: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x170e60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x170e64: 0x2603bd00  addiu       $v1, $s0, -0x4300
    ctx->pc = 0x170e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950144));
    // 0x170e68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x170e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170e6c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x170e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x170e70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x170e70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170e74: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x170e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170e78: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170e78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170e7c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x170e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170e80: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x170e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170e84: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x170e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x170e88: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170E88u;
    SET_GPR_U32(ctx, 31, 0x170E90u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x170E90u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170E90u) { return; }
    ctx->pc = 0x170E90u;
label_170e90:
    // 0x170e90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x170e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170e94: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x170e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170e98: 0xc7ac0148  lwc1        $f12, 0x148($sp)
    ctx->pc = 0x170e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x170e9c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170E9Cu;
    SET_GPR_U32(ctx, 31, 0x170EA4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x170EA4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170EA4u) { return; }
    ctx->pc = 0x170EA4u;
label_170ea4:
    // 0x170ea4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170ea8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x170ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170eac: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x170eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x170eb0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x170EB0u;
    SET_GPR_U32(ctx, 31, 0x170EB8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x170EB8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170EB8u) { return; }
    ctx->pc = 0x170EB8u;
label_170eb8:
    // 0x170eb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ec0: 0x0  nop
    ctx->pc = 0x170ec0u;
    // NOP
    // 0x170ec4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x170ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x170ec8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x170ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x170ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x170eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ed0: 0x0  nop
    ctx->pc = 0x170ed0u;
    // NOP
    // 0x170ed4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x170ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x170ed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170ee0: 0x0  nop
    ctx->pc = 0x170ee0u;
    // NOP
    // 0x170ee4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x170ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x170ee8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x170ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x170eec: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x170eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x170ef0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x170ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x170ef4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x170ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x170ef8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x170ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x170efc: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x170EFCu;
    SET_GPR_U32(ctx, 31, 0x170F04u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x170F04u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170F04u) { return; }
    ctx->pc = 0x170F04u;
label_170f04:
    // 0x170f04: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x170f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x170f08: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x170f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x170f0c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x170f0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x170f10: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x170f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x170f14: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x170f14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x170f18: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x170f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x170f1c: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x170f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x170f20: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x170f20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x170f24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170f28: 0x2448bd50  addiu       $t0, $v0, -0x42B0
    ctx->pc = 0x170f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x170f2c: 0xc040ddc  jal         func_103770
    ctx->pc = 0x170F2Cu;
    SET_GPR_U32(ctx, 31, 0x170F34u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x170F34u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170F34u) { return; }
    ctx->pc = 0x170F34u;
label_170f34:
    // 0x170f34: 0x0  nop
    ctx->pc = 0x170f34u;
    // NOP
    ctx->pc = 0x170f38u;
}
