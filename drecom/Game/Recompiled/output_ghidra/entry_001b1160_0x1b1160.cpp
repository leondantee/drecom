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

// Function: entry_001b1160
// Address: 0x1b1160 - 0x1b11d8
void entry_001b1160_0x1b1160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1160_0x1b1160");
#endif

    ctx->pc = 0x1b1160u;

label_1b1160:
    // 0x1b1160: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1b1160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b1164: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b1164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1168: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1b1168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b116c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1b116cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b1170: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b1170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b1174: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b1174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b1178: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b1178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b117c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1b117cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1b1180: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b1180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b1184: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B1184u;
    {
        const bool branch_taken_0x1b1184 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1184) {
            ctx->pc = 0x1B1160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1160;
        }
    }
    ctx->pc = 0x1B118Cu;
    // 0x1b118c: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1b118cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b1190: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b1190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b1194: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b1194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1198: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b119c: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1b119cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1b11a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b11a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b11a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b11ac: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b11acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b11b0: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b11b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b11b4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b11b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b11b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b11b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b11bc: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1b11bcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1b11c0: 0x8eb10028  lw          $s1, 0x28($s5)
    ctx->pc = 0x1b11c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1b11c4: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1b11c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b11c8: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x1b11c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b11cc: 0x8eb20020  lw          $s2, 0x20($s5)
    ctx->pc = 0x1b11ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b11d0: 0x0  nop
    ctx->pc = 0x1b11d0u;
    // NOP
    // 0x1b11d4: 0x0  nop
    ctx->pc = 0x1b11d4u;
    // NOP
    ctx->pc = 0x1b11d8u;
}
