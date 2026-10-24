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

// Function: caseD_2
// Address: 0x31c384 - 0x31c40c
void caseD_2_0x31c384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x31c384");
#endif

    ctx->pc = 0x31c384u;

    // 0x31c384: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c388: 0x8c62129c  lw          $v0, 0x129C($v1)
    ctx->pc = 0x31c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4764)));
    // 0x31c38c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x31c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c390: 0xac64129c  sw          $a0, 0x129C($v1)
    ctx->pc = 0x31c390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 4));
    // 0x31c394: 0x2c810015  sltiu       $at, $a0, 0x15
    ctx->pc = 0x31c394u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x31c398: 0x14200139  bnez        $at, . + 4 + (0x139 << 2)
    ctx->pc = 0x31C398u;
    {
        const bool branch_taken_0x31c398 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c398) {
            ctx->pc = 0x31C880u;
            return;
        }
    }
    ctx->pc = 0x31C3A0u;
    // 0x31c3a0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31c3a4: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x31c3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31c3a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c3ac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c3b0: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x31c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x31c3b4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31c3b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31c3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c3c0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c3c4: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31c3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x31c3c8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x31c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31c3cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31c3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31c3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c3d4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c3d8: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x31c3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x31c3dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c3e0: 0xac40129c  sw          $zero, 0x129C($v0)
    ctx->pc = 0x31c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4764), GPR_U32(ctx, 0));
    // 0x31c3e4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c3e8: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31c3ec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x31c3f0: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x31c3f4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c3f8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x31c3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x31c3fc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x31c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31c400: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x31c400u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x31c404: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x31C404u;
    {
        const bool branch_taken_0x31c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c404) {
            ctx->pc = 0x31C880u;
            return;
        }
    }
    ctx->pc = 0x31C40Cu;
}
