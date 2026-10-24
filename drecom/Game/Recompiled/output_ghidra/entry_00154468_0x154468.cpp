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

// Function: entry_00154468
// Address: 0x154468 - 0x154490
void entry_00154468_0x154468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154468_0x154468");
#endif

    ctx->pc = 0x154468u;

    // 0x154468: 0xa200157d  sb          $zero, 0x157D($s0)
    ctx->pc = 0x154468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5501), (uint8_t)GPR_U32(ctx, 0));
    // 0x15446c: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x15446cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x154470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154474: 0x0  nop
    ctx->pc = 0x154474u;
    // NOP
    // 0x154478: 0xe60015b8  swc1        $f0, 0x15B8($s0)
    ctx->pc = 0x154478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5560), bits); }
    // 0x15447c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x15447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x154480: 0xa60415bc  sh          $a0, 0x15BC($s0)
    ctx->pc = 0x154480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5564), (uint16_t)GPR_U32(ctx, 4));
    // 0x154484: 0x9203157c  lbu         $v1, 0x157C($s0)
    ctx->pc = 0x154484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5500)));
    // 0x154488: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x154488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15448c: 0xa202157c  sb          $v0, 0x157C($s0)
    ctx->pc = 0x15448cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x154490u;
}
