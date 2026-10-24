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

// Function: default
// Address: 0x330ad8 - 0x330df0
void ps2_default_0x330ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x330ad8");
#endif

    switch (ctx->pc) {
        case 0x330ad8u: goto label_330ad8;
        case 0x330adcu: goto label_330adc;
        case 0x330ae0u: goto label_330ae0;
        case 0x330ae4u: goto label_330ae4;
        case 0x330ae8u: goto label_330ae8;
        case 0x330aecu: goto label_330aec;
        case 0x330af0u: goto label_330af0;
        case 0x330af4u: goto label_330af4;
        case 0x330af8u: goto label_330af8;
        case 0x330afcu: goto label_330afc;
        case 0x330b00u: goto label_330b00;
        case 0x330b04u: goto label_330b04;
        case 0x330b08u: goto label_330b08;
        case 0x330b0cu: goto label_330b0c;
        case 0x330b10u: goto label_330b10;
        case 0x330b14u: goto label_330b14;
        case 0x330b18u: goto label_330b18;
        case 0x330b1cu: goto label_330b1c;
        case 0x330b20u: goto label_330b20;
        case 0x330b24u: goto label_330b24;
        case 0x330b28u: goto label_330b28;
        case 0x330b2cu: goto label_330b2c;
        case 0x330b30u: goto label_330b30;
        case 0x330b34u: goto label_330b34;
        case 0x330b38u: goto label_330b38;
        case 0x330b3cu: goto label_330b3c;
        case 0x330b40u: goto label_330b40;
        case 0x330b44u: goto label_330b44;
        case 0x330b48u: goto label_330b48;
        case 0x330b4cu: goto label_330b4c;
        case 0x330b50u: goto label_330b50;
        case 0x330b54u: goto label_330b54;
        case 0x330b58u: goto label_330b58;
        case 0x330b5cu: goto label_330b5c;
        case 0x330b60u: goto label_330b60;
        case 0x330b64u: goto label_330b64;
        case 0x330b68u: goto label_330b68;
        case 0x330b6cu: goto label_330b6c;
        case 0x330b70u: goto label_330b70;
        case 0x330b74u: goto label_330b74;
        case 0x330b78u: goto label_330b78;
        case 0x330b7cu: goto label_330b7c;
        case 0x330b80u: goto label_330b80;
        case 0x330b84u: goto label_330b84;
        case 0x330b88u: goto label_330b88;
        case 0x330b8cu: goto label_330b8c;
        case 0x330b90u: goto label_330b90;
        case 0x330b94u: goto label_330b94;
        case 0x330b98u: goto label_330b98;
        case 0x330b9cu: goto label_330b9c;
        case 0x330ba0u: goto label_330ba0;
        case 0x330ba4u: goto label_330ba4;
        case 0x330ba8u: goto label_330ba8;
        case 0x330bacu: goto label_330bac;
        case 0x330bb0u: goto label_330bb0;
        case 0x330bb4u: goto label_330bb4;
        case 0x330bb8u: goto label_330bb8;
        case 0x330bbcu: goto label_330bbc;
        case 0x330bc0u: goto label_330bc0;
        case 0x330bc4u: goto label_330bc4;
        case 0x330bc8u: goto label_330bc8;
        case 0x330bccu: goto label_330bcc;
        case 0x330bd0u: goto label_330bd0;
        case 0x330bd4u: goto label_330bd4;
        case 0x330bd8u: goto label_330bd8;
        case 0x330bdcu: goto label_330bdc;
        case 0x330be0u: goto label_330be0;
        case 0x330be4u: goto label_330be4;
        case 0x330be8u: goto label_330be8;
        case 0x330becu: goto label_330bec;
        case 0x330bf0u: goto label_330bf0;
        case 0x330bf4u: goto label_330bf4;
        case 0x330bf8u: goto label_330bf8;
        case 0x330bfcu: goto label_330bfc;
        case 0x330c00u: goto label_330c00;
        case 0x330c04u: goto label_330c04;
        case 0x330c08u: goto label_330c08;
        case 0x330c0cu: goto label_330c0c;
        case 0x330c10u: goto label_330c10;
        case 0x330c14u: goto label_330c14;
        case 0x330c18u: goto label_330c18;
        case 0x330c1cu: goto label_330c1c;
        case 0x330c20u: goto label_330c20;
        case 0x330c24u: goto label_330c24;
        case 0x330c28u: goto label_330c28;
        case 0x330c2cu: goto label_330c2c;
        case 0x330c30u: goto label_330c30;
        case 0x330c34u: goto label_330c34;
        case 0x330c38u: goto label_330c38;
        case 0x330c3cu: goto label_330c3c;
        case 0x330c40u: goto label_330c40;
        case 0x330c44u: goto label_330c44;
        case 0x330c48u: goto label_330c48;
        case 0x330c4cu: goto label_330c4c;
        case 0x330c50u: goto label_330c50;
        case 0x330c54u: goto label_330c54;
        case 0x330c58u: goto label_330c58;
        case 0x330c5cu: goto label_330c5c;
        case 0x330c60u: goto label_330c60;
        case 0x330c64u: goto label_330c64;
        case 0x330c68u: goto label_330c68;
        case 0x330c6cu: goto label_330c6c;
        case 0x330c70u: goto label_330c70;
        case 0x330c74u: goto label_330c74;
        case 0x330c78u: goto label_330c78;
        case 0x330c7cu: goto label_330c7c;
        case 0x330c80u: goto label_330c80;
        case 0x330c84u: goto label_330c84;
        case 0x330c88u: goto label_330c88;
        case 0x330c8cu: goto label_330c8c;
        case 0x330c90u: goto label_330c90;
        case 0x330c94u: goto label_330c94;
        case 0x330c98u: goto label_330c98;
        case 0x330c9cu: goto label_330c9c;
        case 0x330ca0u: goto label_330ca0;
        case 0x330ca4u: goto label_330ca4;
        case 0x330ca8u: goto label_330ca8;
        case 0x330cacu: goto label_330cac;
        case 0x330cb0u: goto label_330cb0;
        case 0x330cb4u: goto label_330cb4;
        case 0x330cb8u: goto label_330cb8;
        case 0x330cbcu: goto label_330cbc;
        case 0x330cc0u: goto label_330cc0;
        case 0x330cc4u: goto label_330cc4;
        case 0x330cc8u: goto label_330cc8;
        case 0x330cccu: goto label_330ccc;
        case 0x330cd0u: goto label_330cd0;
        case 0x330cd4u: goto label_330cd4;
        case 0x330cd8u: goto label_330cd8;
        case 0x330cdcu: goto label_330cdc;
        case 0x330ce0u: goto label_330ce0;
        case 0x330ce4u: goto label_330ce4;
        case 0x330ce8u: goto label_330ce8;
        case 0x330cecu: goto label_330cec;
        case 0x330cf0u: goto label_330cf0;
        case 0x330cf4u: goto label_330cf4;
        case 0x330cf8u: goto label_330cf8;
        case 0x330cfcu: goto label_330cfc;
        case 0x330d00u: goto label_330d00;
        case 0x330d04u: goto label_330d04;
        case 0x330d08u: goto label_330d08;
        case 0x330d0cu: goto label_330d0c;
        case 0x330d10u: goto label_330d10;
        case 0x330d14u: goto label_330d14;
        case 0x330d18u: goto label_330d18;
        case 0x330d1cu: goto label_330d1c;
        case 0x330d20u: goto label_330d20;
        case 0x330d24u: goto label_330d24;
        case 0x330d28u: goto label_330d28;
        case 0x330d2cu: goto label_330d2c;
        case 0x330d30u: goto label_330d30;
        case 0x330d34u: goto label_330d34;
        case 0x330d38u: goto label_330d38;
        case 0x330d3cu: goto label_330d3c;
        case 0x330d40u: goto label_330d40;
        case 0x330d44u: goto label_330d44;
        case 0x330d48u: goto label_330d48;
        case 0x330d4cu: goto label_330d4c;
        case 0x330d50u: goto label_330d50;
        case 0x330d54u: goto label_330d54;
        case 0x330d58u: goto label_330d58;
        case 0x330d5cu: goto label_330d5c;
        case 0x330d60u: goto label_330d60;
        case 0x330d64u: goto label_330d64;
        case 0x330d68u: goto label_330d68;
        case 0x330d6cu: goto label_330d6c;
        case 0x330d70u: goto label_330d70;
        case 0x330d74u: goto label_330d74;
        case 0x330d78u: goto label_330d78;
        case 0x330d7cu: goto label_330d7c;
        case 0x330d80u: goto label_330d80;
        case 0x330d84u: goto label_330d84;
        case 0x330d88u: goto label_330d88;
        case 0x330d8cu: goto label_330d8c;
        case 0x330d90u: goto label_330d90;
        case 0x330d94u: goto label_330d94;
        case 0x330d98u: goto label_330d98;
        case 0x330d9cu: goto label_330d9c;
        case 0x330da0u: goto label_330da0;
        case 0x330da4u: goto label_330da4;
        case 0x330da8u: goto label_330da8;
        case 0x330dacu: goto label_330dac;
        case 0x330db0u: goto label_330db0;
        case 0x330db4u: goto label_330db4;
        case 0x330db8u: goto label_330db8;
        case 0x330dbcu: goto label_330dbc;
        case 0x330dc0u: goto label_330dc0;
        case 0x330dc4u: goto label_330dc4;
        case 0x330dc8u: goto label_330dc8;
        case 0x330dccu: goto label_330dcc;
        case 0x330dd0u: goto label_330dd0;
        case 0x330dd4u: goto label_330dd4;
        case 0x330dd8u: goto label_330dd8;
        case 0x330ddcu: goto label_330ddc;
        case 0x330de0u: goto label_330de0;
        case 0x330de4u: goto label_330de4;
        case 0x330de8u: goto label_330de8;
        case 0x330decu: goto label_330dec;
        default: break;
    }

    ctx->pc = 0x330ad8u;

label_330ad8:
    // 0x330ad8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x330ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_330adc:
    // 0x330adc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x330adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_330ae0:
    // 0x330ae0: 0xe21823  subu        $v1, $a3, $v0
    ctx->pc = 0x330ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_330ae4:
    // 0x330ae4: 0xafa3026c  sw          $v1, 0x26C($sp)
    ctx->pc = 0x330ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 3));
label_330ae8:
    // 0x330ae8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x330ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_330aec:
    // 0x330aec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x330aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_330af0:
    // 0x330af0: 0x463823  subu        $a3, $v0, $a2
    ctx->pc = 0x330af0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_330af4:
    // 0x330af4: 0xafa70270  sw          $a3, 0x270($sp)
    ctx->pc = 0x330af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 7));
label_330af8:
    // 0x330af8: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x330af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330afc:
    // 0x330afc: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x330afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330b00:
    // 0x330b00: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x330b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330b04:
    // 0x330b04: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x330b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_330b08:
    // 0x330b08: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x330b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
label_330b0c:
    // 0x330b0c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x330b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_330b10:
    // 0x330b10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x330b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_330b14:
    // 0x330b14: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x330b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_330b18:
    // 0x330b18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x330b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330b1c:
    // 0x330b1c: 0x0  nop
    ctx->pc = 0x330b1cu;
    // NOP
label_330b20:
    // 0x330b20: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x330b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330b24:
    // 0x330b24: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x330b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_330b28:
    // 0x330b28: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x330b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
label_330b2c:
    // 0x330b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b30:
    // 0x330b30: 0x0  nop
    ctx->pc = 0x330b30u;
    // NOP
label_330b34:
    // 0x330b34: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x330b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330b38:
    // 0x330b38: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x330b38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_330b3c:
    // 0x330b3c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x330b3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b40:
    // 0x330b40: 0x0  nop
    ctx->pc = 0x330b40u;
    // NOP
label_330b44:
    // 0x330b44: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x330b44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_330b48:
    // 0x330b48: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x330b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330b4c:
    // 0x330b4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x330b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_330b50:
    // 0x330b50: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x330b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330b54:
    // 0x330b54: 0x3c033f2a  lui         $v1, 0x3F2A
    ctx->pc = 0x330b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16170 << 16));
label_330b58:
    // 0x330b58: 0x3462aaab  ori         $v0, $v1, 0xAAAB
    ctx->pc = 0x330b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_330b5c:
    // 0x330b5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330b60:
    // 0x330b60: 0x8fa80270  lw          $t0, 0x270($sp)
    ctx->pc = 0x330b60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_330b64:
    // 0x330b64: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x330b64u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b68:
    // 0x330b68: 0x0  nop
    ctx->pc = 0x330b68u;
    // NOP
label_330b6c:
    // 0x330b6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330b70:
    // 0x330b70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x330b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_330b74:
    // 0x330b74: 0x3c0642fa  lui         $a2, 0x42FA
    ctx->pc = 0x330b74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17146 << 16));
label_330b78:
    // 0x330b78: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330b78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b7c:
    // 0x330b7c: 0x0  nop
    ctx->pc = 0x330b7cu;
    // NOP
label_330b80:
    // 0x330b80: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x330b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330b84:
    // 0x330b84: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x330b84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_330b88:
    // 0x330b88: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x330b88u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330b8c:
    // 0x330b8c: 0x0  nop
    ctx->pc = 0x330b8cu;
    // NOP
label_330b90:
    // 0x330b90: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x330b90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_330b94:
    // 0x330b94: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x330b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330b98:
    // 0x330b98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x330b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_330b9c:
    // 0x330b9c: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x330b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_330ba0:
    // 0x330ba0: 0x3c063f2a  lui         $a2, 0x3F2A
    ctx->pc = 0x330ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16170 << 16));
label_330ba4:
    // 0x330ba4: 0x34c2aaab  ori         $v0, $a2, 0xAAAB
    ctx->pc = 0x330ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43691);
label_330ba8:
    // 0x330ba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330bac:
    // 0x330bac: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x330bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_330bb0:
    // 0x330bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330bb4:
    // 0x330bb4: 0x0  nop
    ctx->pc = 0x330bb4u;
    // NOP
label_330bb8:
    // 0x330bb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330bbc:
    // 0x330bbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x330bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_330bc0:
    // 0x330bc0: 0x3c0642fa  lui         $a2, 0x42FA
    ctx->pc = 0x330bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17146 << 16));
label_330bc4:
    // 0x330bc4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330bc4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330bc8:
    // 0x330bc8: 0x0  nop
    ctx->pc = 0x330bc8u;
    // NOP
label_330bcc:
    // 0x330bcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330bd0:
    // 0x330bd0: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x330bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330bd4:
    // 0x330bd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330bd8:
    // 0x330bd8: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x330bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_330bdc:
    // 0x330bdc: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x330bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
label_330be0:
    // 0x330be0: 0x3447aaab  ori         $a3, $v0, 0xAAAB
    ctx->pc = 0x330be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_330be4:
    // 0x330be4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x330be4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330be8:
    // 0x330be8: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x330be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_330bec:
    // 0x330bec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x330becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_330bf0:
    // 0x330bf0: 0x0  nop
    ctx->pc = 0x330bf0u;
    // NOP
label_330bf4:
    // 0x330bf4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x330bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_330bf8:
    // 0x330bf8: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x330bf8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330bfc:
    // 0x330bfc: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x330bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
label_330c00:
    // 0x330c00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330c04:
    // 0x330c04: 0x0  nop
    ctx->pc = 0x330c04u;
    // NOP
label_330c08:
    // 0x330c08: 0x460c0082  mul.s       $f2, $f0, $f12
    ctx->pc = 0x330c08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_330c0c:
    // 0x330c0c: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x330c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c10:
    // 0x330c10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x330c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_330c14:
    // 0x330c14: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x330c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_330c18:
    // 0x330c18: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x330c18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
label_330c1c:
    // 0x330c1c: 0x34e7d70a  ori         $a3, $a3, 0xD70A
    ctx->pc = 0x330c1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
label_330c20:
    // 0x330c20: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x330c20u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c24:
    // 0x330c24: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x330c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c28:
    // 0x330c28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x330c28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330c2c:
    // 0x330c2c: 0xe7a10274  swc1        $f1, 0x274($sp)
    ctx->pc = 0x330c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330c30:
    // 0x330c30: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x330c30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
label_330c34:
    // 0x330c34: 0x34e2d70a  ori         $v0, $a3, 0xD70A
    ctx->pc = 0x330c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
label_330c38:
    // 0x330c38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c3c:
    // 0x330c3c: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x330c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c40:
    // 0x330c40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330c44:
    // 0x330c44: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x330c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_330c48:
    // 0x330c48: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x330c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_330c4c:
    // 0x330c4c: 0x3468d70a  ori         $t0, $v1, 0xD70A
    ctx->pc = 0x330c4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_330c50:
    // 0x330c50: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x330c50u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330c54:
    // 0x330c54: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x330c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330c58:
    // 0x330c58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x330c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_330c5c:
    // 0x330c5c: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x330c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_330c60:
    // 0x330c60: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x330c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_330c64:
    // 0x330c64: 0x3467d70a  ori         $a3, $v1, 0xD70A
    ctx->pc = 0x330c64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_330c68:
    // 0x330c68: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x330c68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c6c:
    // 0x330c6c: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x330c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c70:
    // 0x330c70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330c74:
    // 0x330c74: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x330c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_330c78:
    // 0x330c78: 0x3c073f4c  lui         $a3, 0x3F4C
    ctx->pc = 0x330c78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16204 << 16));
label_330c7c:
    // 0x330c7c: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x330c7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
label_330c80:
    // 0x330c80: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x330c80u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c84:
    // 0x330c84: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x330c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330c88:
    // 0x330c88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330c88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330c8c:
    // 0x330c8c: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x330c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330c90:
    // 0x330c90: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x330c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
label_330c94:
    // 0x330c94: 0x3467cccd  ori         $a3, $v1, 0xCCCD
    ctx->pc = 0x330c94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_330c98:
    // 0x330c98: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x330c98u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330c9c:
    // 0x330c9c: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x330c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330ca0:
    // 0x330ca0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_330ca4:
    // 0x330ca4: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x330ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_330ca8:
    // 0x330ca8: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x330ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_330cac:
    // 0x330cac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x330cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_330cb0:
    // 0x330cb0: 0x0  nop
    ctx->pc = 0x330cb0u;
    // NOP
label_330cb4:
    // 0x330cb4: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x330cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330cb8:
    // 0x330cb8: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x330cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330cbc:
    // 0x330cbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330cc0:
    // 0x330cc0: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x330cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_330cc4:
    // 0x330cc4: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x330cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_330cc8:
    // 0x330cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330ccc:
    // 0x330ccc: 0x0  nop
    ctx->pc = 0x330cccu;
    // NOP
label_330cd0:
    // 0x330cd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330cd4:
    // 0x330cd4: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x330cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330cd8:
    // 0x330cd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330cdc:
    // 0x330cdc: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x330cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_330ce0:
    // 0x330ce0: 0x8e636610  lw          $v1, 0x6610($s3)
    ctx->pc = 0x330ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
label_330ce4:
    // 0x330ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330ce8:
    // 0x330ce8: 0x0  nop
    ctx->pc = 0x330ce8u;
    // NOP
label_330cec:
    // 0x330cec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_330cf0:
    // 0x330cf0: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x330cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330cf4:
    // 0x330cf4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x330cf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_330cf8:
    // 0x330cf8: 0xe7a1027c  swc1        $f1, 0x27C($sp)
    ctx->pc = 0x330cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
label_330cfc:
    // 0x330cfc: 0x8e666614  lw          $a2, 0x6614($s3)
    ctx->pc = 0x330cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
label_330d00:
    // 0x330d00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x330d00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_330d04:
    // 0x330d04: 0x0  nop
    ctx->pc = 0x330d04u;
    // NOP
label_330d08:
    // 0x330d08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_330d0c:
    // 0x330d0c: 0xc7a10280  lwc1        $f1, 0x280($sp)
    ctx->pc = 0x330d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330d10:
    // 0x330d10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x330d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_330d14:
    // 0x330d14: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x330d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_330d18:
    // 0x330d18: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x330d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d1c:
    // 0x330d1c: 0xc047fa2  jal         func_11FE88
label_330d20:
    if (ctx->pc == 0x330D20u) {
        ctx->pc = 0x330D24u;
        goto label_330d24;
    }
    ctx->pc = 0x330D1Cu;
    SET_GPR_U32(ctx, 31, 0x330D24u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D1Cu, 0x330D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D24u;
label_330d24:
    // 0x330d24: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x330d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_330d28:
    // 0x330d28: 0xc7ac0278  lwc1        $f12, 0x278($sp)
    ctx->pc = 0x330d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d2c:
    // 0x330d2c: 0xc047fa2  jal         func_11FE88
label_330d30:
    if (ctx->pc == 0x330D30u) {
        ctx->pc = 0x330D34u;
        goto label_330d34;
    }
    ctx->pc = 0x330D2Cu;
    SET_GPR_U32(ctx, 31, 0x330D34u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D2Cu, 0x330D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D34u;
label_330d34:
    // 0x330d34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330d34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d38:
    // 0x330d38: 0xafa30234  sw          $v1, 0x234($sp)
    ctx->pc = 0x330d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 3));
label_330d3c:
    // 0x330d3c: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x330d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330d40:
    // 0x330d40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x330d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_330d44:
    // 0x330d44: 0xc047fa2  jal         func_11FE88
label_330d48:
    if (ctx->pc == 0x330D48u) {
        ctx->pc = 0x330D4Cu;
        goto label_330d4c;
    }
    ctx->pc = 0x330D44u;
    SET_GPR_U32(ctx, 31, 0x330D4Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D44u, 0x330D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D4Cu;
label_330d4c:
    // 0x330d4c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x330d4cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d50:
    // 0x330d50: 0xafb20238  sw          $s2, 0x238($sp)
    ctx->pc = 0x330d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 18));
label_330d54:
    // 0x330d54: 0xc7ac0280  lwc1        $f12, 0x280($sp)
    ctx->pc = 0x330d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d58:
    // 0x330d58: 0xc047fa2  jal         func_11FE88
label_330d5c:
    if (ctx->pc == 0x330D5Cu) {
        ctx->pc = 0x330D60u;
        goto label_330d60;
    }
    ctx->pc = 0x330D58u;
    SET_GPR_U32(ctx, 31, 0x330D60u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D58u, 0x330D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D60u;
label_330d60:
    // 0x330d60: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x330d60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d64:
    // 0x330d64: 0xafa7023c  sw          $a3, 0x23C($sp)
    ctx->pc = 0x330d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 7));
label_330d68:
    // 0x330d68: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x330d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d6c:
    // 0x330d6c: 0xc047fa2  jal         func_11FE88
label_330d70:
    if (ctx->pc == 0x330D70u) {
        ctx->pc = 0x330D74u;
        goto label_330d74;
    }
    ctx->pc = 0x330D6Cu;
    SET_GPR_U32(ctx, 31, 0x330D74u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D6Cu, 0x330D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D74u;
label_330d74:
    // 0x330d74: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x330d74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d78:
    // 0x330d78: 0xafa60240  sw          $a2, 0x240($sp)
    ctx->pc = 0x330d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 6));
label_330d7c:
    // 0x330d7c: 0xc7ac0278  lwc1        $f12, 0x278($sp)
    ctx->pc = 0x330d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330d80:
    // 0x330d80: 0xc047fa2  jal         func_11FE88
label_330d84:
    if (ctx->pc == 0x330D84u) {
        ctx->pc = 0x330D88u;
        goto label_330d88;
    }
    ctx->pc = 0x330D80u;
    SET_GPR_U32(ctx, 31, 0x330D88u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D80u, 0x330D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D88u;
label_330d88:
    // 0x330d88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330d88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330d8c:
    // 0x330d8c: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x330d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
label_330d90:
    // 0x330d90: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x330d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330d94:
    // 0x330d94: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x330d94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_330d98:
    // 0x330d98: 0xc047fa2  jal         func_11FE88
label_330d9c:
    if (ctx->pc == 0x330D9Cu) {
        ctx->pc = 0x330DA0u;
        goto label_330da0;
    }
    ctx->pc = 0x330D98u;
    SET_GPR_U32(ctx, 31, 0x330DA0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330D98u, 0x330DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DA0u;
label_330da0:
    // 0x330da0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330da0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330da4:
    // 0x330da4: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x330da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
label_330da8:
    // 0x330da8: 0xc7ac0280  lwc1        $f12, 0x280($sp)
    ctx->pc = 0x330da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_330dac:
    // 0x330dac: 0xc047fa2  jal         func_11FE88
label_330db0:
    if (ctx->pc == 0x330DB0u) {
        ctx->pc = 0x330DB4u;
        goto label_330db4;
    }
    ctx->pc = 0x330DACu;
    SET_GPR_U32(ctx, 31, 0x330DB4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x330DACu, 0x330DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DB4u;
label_330db4:
    // 0x330db4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x330db4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_330db8:
    // 0x330db8: 0xafa6024c  sw          $a2, 0x24C($sp)
    ctx->pc = 0x330db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 6));
label_330dbc:
    // 0x330dbc: 0x92c20006  lbu         $v0, 0x6($s6)
    ctx->pc = 0x330dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_330dc0:
    // 0x330dc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x330dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_330dc4:
    // 0x330dc4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x330dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_330dc8:
    // 0x330dc8: 0x1020012b  beqz        $at, . + 4 + (0x12B << 2)
label_330dcc:
    if (ctx->pc == 0x330DCCu) {
        ctx->pc = 0x330DD0u;
        goto label_330dd0;
    }
    ctx->pc = 0x330DC8u;
    {
        const bool branch_taken_0x330dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330dc8) {
            ctx->pc = 0x331278u;
            return;
        }
    }
    ctx->pc = 0x330DD0u;
label_330dd0:
    // 0x330dd0: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x330dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
label_330dd4:
    // 0x330dd4: 0x24e62090  addiu       $a2, $a3, 0x2090
    ctx->pc = 0x330dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8336));
label_330dd8:
    // 0x330dd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x330dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_330ddc:
    // 0x330ddc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x330ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_330de0:
    // 0x330de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x330de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_330de4:
    // 0x330de4: 0x400008  jr          $v0
label_330de8:
    if (ctx->pc == 0x330DE8u) {
        ctx->pc = 0x330DECu;
        goto label_330dec;
    }
    ctx->pc = 0x330DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330DE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x330DECu;
label_330dec:
    // 0x330dec: 0x0  nop
    ctx->pc = 0x330decu;
    // NOP
    ctx->pc = 0x330df0u;
}
