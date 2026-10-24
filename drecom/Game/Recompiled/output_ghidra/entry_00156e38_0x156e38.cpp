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

// Function: entry_00156e38
// Address: 0x156e38 - 0x156f00
void entry_00156e38_0x156e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156e38_0x156e38");
#endif

    switch (ctx->pc) {
        case 0x156e48u: goto label_156e48;
        case 0x156e58u: goto label_156e58;
        case 0x156ef4u: goto label_156ef4;
        default: break;
    }

    ctx->pc = 0x156e38u;

    // 0x156e38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x156e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x156e3c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x156e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x156e40: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x156E40u;
    SET_GPR_U32(ctx, 31, 0x156E48u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x156E48u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x156E48u) { return; }
    ctx->pc = 0x156E48u;
label_156e48:
    // 0x156e48: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x156e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156e4c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x156e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x156e50: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x156E50u;
    SET_GPR_U32(ctx, 31, 0x156E58u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x156E58u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x156E58u) { return; }
    ctx->pc = 0x156E58u;
label_156e58:
    // 0x156e58: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x156e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x156e5c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x156e5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156e60: 0xa607001c  sh          $a3, 0x1C($s0)
    ctx->pc = 0x156e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 7));
    // 0x156e64: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x156e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x156e68: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x156e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x156e6c: 0xa605002c  sh          $a1, 0x2C($s0)
    ctx->pc = 0x156e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x156e70: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x156e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x156e74: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x156e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x156e78: 0xa603003c  sh          $v1, 0x3C($s0)
    ctx->pc = 0x156e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x156e7c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x156e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x156e80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156e84: 0xa602004c  sh          $v0, 0x4C($s0)
    ctx->pc = 0x156e84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x156e88: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x156e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x156e8c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x156e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x156e90: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x156e90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x156e94: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x156e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x156e98: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x156e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x156e9c: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x156e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x156ea0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x156ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x156ea4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156ea8: 0xa602003e  sh          $v0, 0x3E($s0)
    ctx->pc = 0x156ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x156eac: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x156eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x156eb0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x156eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x156eb4: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x156eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x156eb8: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x156eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156ebc: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x156ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x156ec0: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x156ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156ec4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x156ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x156ec8: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x156ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156ecc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x156eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x156ed0: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x156ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156ed4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x156ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x156ed8: 0x266254e0  addiu       $v0, $s3, 0x54E0
    ctx->pc = 0x156ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21728));
    // 0x156edc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x156edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x156ee0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x156ee4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x156ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156ee8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x156ee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x156eec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156EECu;
    SET_GPR_U32(ctx, 31, 0x156EF4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156EECu, 0x156EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EF4u;
label_156ef4:
    // 0x156ef4: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x156ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x156ef8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x156ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x156efc: 0x0  nop
    ctx->pc = 0x156efcu;
    // NOP
    ctx->pc = 0x156f00u;
}
