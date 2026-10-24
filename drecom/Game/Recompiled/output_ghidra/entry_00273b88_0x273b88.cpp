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

// Function: entry_00273b88
// Address: 0x273b88 - 0x273dd0
void entry_00273b88_0x273b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273b88_0x273b88");
#endif

    switch (ctx->pc) {
        case 0x273bd4u: goto label_273bd4;
        case 0x273c98u: goto label_273c98;
        case 0x273cdcu: goto label_273cdc;
        case 0x273d38u: goto label_273d38;
        default: break;
    }

    ctx->pc = 0x273b88u;

    // 0x273b88: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x273b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x273b8c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273b90: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x273b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273b94: 0x90631b30  lbu         $v1, 0x1B30($v1)
    ctx->pc = 0x273b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6960)));
    // 0x273b98: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x273b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x273b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273ba0: 0x14a30161  bne         $a1, $v1, . + 4 + (0x161 << 2)
    ctx->pc = 0x273BA0u;
    {
        const bool branch_taken_0x273ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x273ba0) {
            ctx->pc = 0x274128u;
            return;
        }
    }
    ctx->pc = 0x273BA8u;
    // 0x273ba8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273bac: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273bb0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273bb4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273bb8: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x273bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273bbc: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273bc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x273bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x273bc4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x273bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x273bc8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x273bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x273bcc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x273BCCu;
    SET_GPR_U32(ctx, 31, 0x273BD4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x273BD4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x273BD4u) { return; }
    ctx->pc = 0x273BD4u;
label_273bd4:
    // 0x273bd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x273bd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x273bd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273bdc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x273bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273be0: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x273be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x273be4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273be8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273bec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273becu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273bf0: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273bf4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x273bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273bf8: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x273bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x273bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273c00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c08: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x273c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273c10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273c14: 0x8e2502d0  lw          $a1, 0x2D0($s1)
    ctx->pc = 0x273c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273c18: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x273c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x273c1c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x273c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x273c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x273c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273c24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c28: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273c30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273c34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273c38: 0x8e3702d0  lw          $s7, 0x2D0($s1)
    ctx->pc = 0x273c38u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273c3c: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x273c3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x273c40: 0xe6e00038  swc1        $f0, 0x38($s7)
    ctx->pc = 0x273c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 56), bits); }
    // 0x273c44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c48: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c4c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273c50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273c54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273c58: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273c5c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x273c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273c60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x273c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c64: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x273c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273c68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273c6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273c70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x273c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x273c74: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273c78: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x273c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273c7c: 0x121240  sll         $v0, $s2, 9
    ctx->pc = 0x273c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273c80: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x273c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x273c84: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x273c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273c88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273c8c: 0x24460c30  addiu       $a2, $v0, 0xC30
    ctx->pc = 0x273c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3120));
    // 0x273c90: 0xc040d62  jal         func_103588
    ctx->pc = 0x273C90u;
    SET_GPR_U32(ctx, 31, 0x273C98u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x273C98u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x273C98u) { return; }
    ctx->pc = 0x273C98u;
label_273c98:
    // 0x273c98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x273c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273c9c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x273c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273ca0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273ca4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273ca8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x273ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x273cac: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273cb0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x273cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273cb4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x273cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273cb8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x273cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273cbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273cc0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273cc4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x273cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x273cc8: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273ccc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x273cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273cd0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x273cd4: 0xc040c92  jal         func_103248
    ctx->pc = 0x273CD4u;
    SET_GPR_U32(ctx, 31, 0x273CDCu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x273CDCu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x273CDCu) { return; }
    ctx->pc = 0x273CDCu;
label_273cdc:
    // 0x273cdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x273cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273ce0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x273ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273ce4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273ce8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x273ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x273cec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x273cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x273cf0: 0x8e2202d0  lw          $v0, 0x2D0($s1)
    ctx->pc = 0x273cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x273cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x273cf8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273cfc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273d00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273d04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273d0c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273d10: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x273d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273d14: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x273d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273d18: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273d1c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x273d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273d20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d24: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x273d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x273d28: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x273d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x273d2c: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x273d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x273d30: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x273D30u;
    SET_GPR_U32(ctx, 31, 0x273D38u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x273D38u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x273D38u) { return; }
    ctx->pc = 0x273D38u;
label_273d38:
    // 0x273d38: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x273d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273d3c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273d40: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273d44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d48: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x273d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273d4c: 0x3c033fae  lui         $v1, 0x3FAE
    ctx->pc = 0x273d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16302 << 16));
    // 0x273d50: 0x34635727  ori         $v1, $v1, 0x5727
    ctx->pc = 0x273d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22311);
    // 0x273d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273d58: 0x0  nop
    ctx->pc = 0x273d58u;
    // NOP
    // 0x273d5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x273d60: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x273d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x273d64: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x273d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273d68: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273d6c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x273d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273d70: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x273d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x273d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x273d78: 0x346320c5  ori         $v1, $v1, 0x20C5
    ctx->pc = 0x273d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8389);
    // 0x273d7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x273d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273d80: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x273d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273d84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x273d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273d88: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x273d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x273d8c: 0x121a40  sll         $v1, $s2, 9
    ctx->pc = 0x273d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 9));
    // 0x273d90: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x273d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x273d94: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x273d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x273d98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x273d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273d9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x273d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x273da0: 0x346320c5  ori         $v1, $v1, 0x20C5
    ctx->pc = 0x273da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8389);
    // 0x273da4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x273da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x273da8: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x273da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273dac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x273dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x273db0: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x273db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x273db4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273db8: 0x32040001  andi        $a0, $s0, 0x1
    ctx->pc = 0x273db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x273dbc: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x273DBCu;
    {
        const bool branch_taken_0x273dbc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x273dbc) {
            ctx->pc = 0x273DD0u;
            return;
        }
    }
    ctx->pc = 0x273DC4u;
    // 0x273dc4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x273DC4u;
    {
        const bool branch_taken_0x273dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x273dc4) {
            ctx->pc = 0x273DD0u;
            return;
        }
    }
    ctx->pc = 0x273DCCu;
    // 0x273dcc: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x273dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    ctx->pc = 0x273dd0u;
}
