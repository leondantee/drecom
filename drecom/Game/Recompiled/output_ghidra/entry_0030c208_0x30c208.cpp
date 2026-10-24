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

// Function: entry_0030c208
// Address: 0x30c208 - 0x30c290
void entry_0030c208_0x30c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c208_0x30c208");
#endif

    ctx->pc = 0x30c208u;

    // 0x30c208: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x30c208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30c20c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x30C20Cu;
    {
        const bool branch_taken_0x30c20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c20c) {
            ctx->pc = 0x30C1C0u;
            return;
        }
    }
    ctx->pc = 0x30C214u;
    // 0x30c214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30c214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c218: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c21c: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x30c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
    // 0x30c220: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30c220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30c224: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x30c224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x30c228: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x30c228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x30c22c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c230: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c234: 0x2463135c  addiu       $v1, $v1, 0x135C
    ctx->pc = 0x30c234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4956));
    // 0x30c238: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30c238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30c23c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c240: 0xac601360  sw          $zero, 0x1360($v1)
    ctx->pc = 0x30c240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4960), GPR_U32(ctx, 0));
    // 0x30c244: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c248: 0xac60136c  sw          $zero, 0x136C($v1)
    ctx->pc = 0x30c248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4972), GPR_U32(ctx, 0));
    // 0x30c24c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c250: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x30c250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x30c254: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30c254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30c258: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x30c258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x30c25c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x30C25Cu;
    {
        const bool branch_taken_0x30c25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c25c) {
            ctx->pc = 0x30C290u;
            return;
        }
    }
    ctx->pc = 0x30C264u;
    // 0x30c264: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x30c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c268: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c26c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c26cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c270: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c274: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x30c274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c278: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c27c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c27cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c280: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c284: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c284u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c288: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x30c288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30c28c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30c290u;
}
