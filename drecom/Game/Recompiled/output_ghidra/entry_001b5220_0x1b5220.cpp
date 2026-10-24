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

// Function: entry_001b5220
// Address: 0x1b5220 - 0x1b52a0
void entry_001b5220_0x1b5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5220_0x1b5220");
#endif

    ctx->pc = 0x1b5220u;

    // 0x1b5220: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b5220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b5224: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b5224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b5228: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1b5228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
    // 0x1b522c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b5230: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b5230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b5234: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b5234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1b5238: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b5238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b523c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b5240: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1b5240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1b5244: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b5248: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b5248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b524c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b524cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1b5250: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b5254: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b5254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b5258: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b5258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1b525c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b5260: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B5260u;
    {
        const bool branch_taken_0x1b5260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5260) {
            ctx->pc = 0x1B52A0u;
            return;
        }
    }
    ctx->pc = 0x1B5268u;
    // 0x1b5268: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b526c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b5270: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1b5270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1b5274: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b5274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b5278: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1b527c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b5280: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b5284: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1b5284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b5288: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b528c: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1b528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5290: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b5294: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1b5294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1b5298: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B5298u;
    {
        const bool branch_taken_0x1b5298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5298) {
            ctx->pc = 0x1B52E0u;
            return;
        }
    }
    ctx->pc = 0x1B52A0u;
}
