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

// Function: caseD_3
// Address: 0x1bdb68 - 0x1bdbc8
void caseD_3_0x1bdb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1bdb68");
#endif

    ctx->pc = 0x1bdb68u;

    // 0x1bdb68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb6c: 0x8482127a  lh          $v0, 0x127A($a0)
    ctx->pc = 0x1bdb6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x1bdb70: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1bdb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bdb74: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1bdb74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdb78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdb7c: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x1bdb7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1bdb80: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1bdb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1bdb84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1bdb84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1bdb88: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BDB88u;
    {
        const bool branch_taken_0x1bdb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb88) {
            ctx->pc = 0x1BDBC8u;
            return;
        }
    }
    ctx->pc = 0x1BDB90u;
    // 0x1bdb90: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1bdb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1bdb94: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1bdb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1bdb98: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDB98u;
    {
        const bool branch_taken_0x1bdb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb98) {
            ctx->pc = 0x1BDBC8u;
            return;
        }
    }
    ctx->pc = 0x1BDBA0u;
    // 0x1bdba0: 0x3c044297  lui         $a0, 0x4297
    ctx->pc = 0x1bdba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17047 << 16));
    // 0x1bdba4: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x1bdba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x1bdba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdbac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdbb0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bdbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1bdbb4: 0x3c054086  lui         $a1, 0x4086
    ctx->pc = 0x1bdbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16518 << 16));
    // 0x1bdbb8: 0x34a36666  ori         $v1, $a1, 0x6666
    ctx->pc = 0x1bdbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x1bdbbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdbbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdbc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdbc4: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x1bdbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
    ctx->pc = 0x1bdbc8u;
}
