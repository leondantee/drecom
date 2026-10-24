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

// Function: entry_00189fd0
// Address: 0x189fd0 - 0x18a070
void entry_00189fd0_0x189fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189fd0_0x189fd0");
#endif

    switch (ctx->pc) {
        case 0x18a050u: goto label_18a050;
        default: break;
    }

    ctx->pc = 0x189fd0u;

    // 0x189fd0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189fd4: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x189fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x189fd8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x189fdc: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x189fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x189fe0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x189fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189fe8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x189fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x189fec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x189fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x189ff0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x189ff0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x189ff4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x189ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189ff8: 0xdc6200f8  ld          $v0, 0xF8($v1)
    ctx->pc = 0x189ff8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x189ffc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x189ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18a000: 0xfc6200f8  sd          $v0, 0xF8($v1)
    ctx->pc = 0x18a000u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 2));
    // 0x18a004: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a008: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x18a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x18a00c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x18a00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x18a010: 0x8c222508  lw          $v0, 0x2508($at)
    ctx->pc = 0x18a010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2508u));
    // 0x18a014: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18a014u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a01c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x18a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x18a020: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x18a020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18a024: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x18a024u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x18a028: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x18a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18a02c: 0xdc6200f8  ld          $v0, 0xF8($v1)
    ctx->pc = 0x18a02cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x18a030: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18a034: 0xfc6200f8  sd          $v0, 0xF8($v1)
    ctx->pc = 0x18a034u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 248), GPR_U64(ctx, 2));
    // 0x18a038: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a03c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x18a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x18a040: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x18a044: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x18a044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x18a048: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x18A048u;
    SET_GPR_U32(ctx, 31, 0x18A050u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x18A050u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18A050u) { return; }
    ctx->pc = 0x18A050u;
label_18a050:
    // 0x18a050: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x18a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a054: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x18a054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a058: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18a05c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x18a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x18a060: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18a064: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x18a064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x18a068: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x18A068u;
    SET_GPR_U32(ctx, 31, 0x18A070u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x18A070u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18A070u) { return; }
    ctx->pc = 0x18A070u;
}
