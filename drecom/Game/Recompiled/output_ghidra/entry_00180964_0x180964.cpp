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

// Function: entry_00180964
// Address: 0x180964 - 0x180a04
void entry_00180964_0x180964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180964_0x180964");
#endif

    ctx->pc = 0x180964u;

    // 0x180964: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180968: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180968u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18096c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x18096cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180970: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x180970u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x180974: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x180974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x180978: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x180978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18097c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18097cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180980: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180984: 0x24641380  addiu       $a0, $v1, 0x1380
    ctx->pc = 0x180984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180988: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x180988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18098c: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x18098cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x180990: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x180990u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x180994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180998: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x180998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x18099c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x18099cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x1809a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1809a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1809a4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1809a4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1809a8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1809a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1809ac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1809acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1809b0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1809b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1809b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1809b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1809b8: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1809b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1809bc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1809bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1809c0: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1809c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1809c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1809c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1809c8: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x1809c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1809cc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1809ccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1809d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1809d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1809d4: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x1809d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1809d8: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1809d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1809dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1809dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1809e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1809e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1809e4: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x1809e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x1809e8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1809e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1809ec: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x1809ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x1809f0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1809F0u;
    {
        const bool branch_taken_0x1809f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1809f0) {
            ctx->pc = 0x180A04u;
            return;
        }
    }
    ctx->pc = 0x1809F8u;
    // 0x1809f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1809f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1809fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1809fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x180a00: 0xac6400b8  sw          $a0, 0xB8($v1)
    ctx->pc = 0x180a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 4));
    ctx->pc = 0x180a04u;
}
